import pickle
import numpy as np
import gymnasium as gym
import ale_py

# hyperparameters
H = 200               # hidden layer size
D = 80 * 80           # input size
batch_size = 10       # update weights after every 10 Pong points (episodes in this implementation)
learning_rate = 1e-4
gamma = 0.99
decay_rate = 0.99
resume = False

if resume:
    model = pickle.load(open('save.p', 'rb'))
else:
    model = {}
    model['W1'] = np.random.randn(H, D) / np.sqrt(D)   # xavier initialization
    model['W2'] = np.random.randn(H) / np.sqrt(H)

grad_buffer = {k: np.zeros_like(v) for k, v in model.items()}
rmsprop_cache = {k: np.zeros_like(v) for k, v in model.items()}


def sigmoid(x):
    return 1.0 / (1.0 + np.exp(-x))


def prepro(I):
    """210x160x3 uint8 frame -> 80x80 float vector, flattened."""
    I = I[35:195]
    I = I[::2, ::2, 0]
    I[I == 144] = 0
    I[I == 109] = 0
    I[I != 0] = 1
    return I.astype(np.float64).ravel()


def discount_rewards(r):
    discounted_r = np.zeros_like(r)
    running_add = 0
    for t in reversed(range(r.size)):
        if r[t] != 0:
            running_add = 0  # game boundary (pong specific)
        running_add = running_add * gamma + r[t]
        discounted_r[t] = running_add
    return discounted_r


def policy_forward(x):
    h = np.dot(model['W1'], x)
    h[h < 0] = 0  # ReLU
    logp = np.dot(model['W2'], h)
    p = sigmoid(logp)
    return p, h  # prob of moving UP, hidden state


def policy_backward(eph, epdlogp, epx):
    dW2 = np.dot(eph.T, epdlogp).ravel()
    dh = np.outer(epdlogp, model['W2'])
    dh[eph <= 0] = 0  # backprop ReLU
    dW1 = np.dot(dh.T, epx)
    return {'W1': dW1, 'W2': dW2}


env = gym.make('ALE/Pong-v5')
observation, info = env.reset()
prev_x = None
xs, hs, dlogps, drs = [], [], [], []   #xs: input to the network at each step, hs: hidden states from that steps forward pass, dlogps: gradient for that step, drs: reward received at that step
running_reward = None  #a running mean of the final score of each game, used to track progress
reward_sum = 0  #running total reward for the current game
# In this implementation, one Pong point (rally) is treated as an episode.
point_number = 0   #how many points have been played so far, used to track progress and determine when to update the model

while True: 
    # ---- prepro, compute difference frame ----
    cur_x = prepro(observation)  #observation was defined on line 67
    x = cur_x - prev_x if prev_x is not None else np.zeros(D)
    prev_x = cur_x #in the next iteration, prev_x will be the current frame, and cur_x will be the next frame, so x will be the difference between the two frames

    # one pass through this inner loop is one Pong point (== one episode here)
    point_over = False
    while not point_over:
        # ---- sample action from pi_theta, step environment ----
        aprob, h = policy_forward(x)
        action = 2 if np.random.uniform() < aprob else 3  # 2=UP, 3=DOWN

        xs.append(x)
        hs.append(h)
        y = 1 if action == 2 else 0  # fake label
        dlogps.append(y - aprob)

        observation, reward, terminated, truncated, info = env.step(action)  #note that the machine doesnt know w=that action 2 is up or 3 is down. only we know
        done = terminated or truncated
        reward_sum += reward
        drs.append(reward)

        # ---- point over? ----
        point_over = (reward != 0) or done

        if not point_over:
            # loop straight back into "sample action, step environment":
            # still need a fresh diff frame for the next step of this point
            cur_x = prepro(observation)
            x = cur_x - prev_x
            prev_x = cur_x

    # a point just ended -- reset prev_x so the first diff frame of the next
    # point isn't computed against the last frame of this one
    prev_x = None

    # ---- discount rewards, standardize, backprop, accumulate gradient ----

    #np.vstack is used to stack the list of arrays into a single array, where each array is a row in the resulting array. This is necessary because we need to have all the inputs, hidden states, gradients, and rewards for the entire point (episode) in a single array for further processing.
    epx = np.vstack(xs)
    eph = np.vstack(hs)
    epdlogp = np.vstack(dlogps)
    epr = np.vstack(drs)
    xs, hs, dlogps, drs = [], [], [], []  #clear arrays so they can be re-used for next point

    # sanity check: these must all describe the same set of steps
    assert epx.shape[0] == eph.shape[0] == epdlogp.shape[0] == epr.shape[0], (
        f"length mismatch: epx={epx.shape[0]} eph={eph.shape[0]} "
        f"epdlogp={epdlogp.shape[0]} epr={epr.shape[0]}"
    )

    discounted_epr = discount_rewards(epr)
    discounted_epr -= np.mean(discounted_epr)
    std = np.std(discounted_epr)
    if std != 0:
        discounted_epr /= std

    epdlogp *= discounted_epr  # modulate gradient with advantage
    grad = policy_backward(eph, epdlogp, epx)
    for k in model:
        grad_buffer[k] += grad[k]

    point_number += 1  # one point just finished

    # ---- 10 episodes (points) collected? ----
    if point_number % batch_size == 0:
        # ---- RMSProp update, reset gradient buffer ----
        for k, v in model.items():
            g = grad_buffer[k]
            rmsprop_cache[k] = decay_rate * rmsprop_cache[k] + (1 - decay_rate) * g ** 2
            model[k] += learning_rate * g / (np.sqrt(rmsprop_cache[k]) + 1e-5)
            grad_buffer[k] = np.zeros_like(v)

    print(f'Point {point_number}: reward = {reward:+.0f}')

    if point_number % 100 == 0:
        pickle.dump(model, open('save.p', 'wb'))

    if done:
        # a full 21-point game just ended -- update the running reward using
        # the FINAL game score, not an intermediate mid-game total
        running_reward = reward_sum if running_reward is None else running_reward * 0.99 + reward_sum * 0.01
        print(f'Game finished. Total score = {reward_sum}, running mean = {running_reward:.3f}')
        reward_sum = 0
        observation, info = env.reset()
        prev_x = None