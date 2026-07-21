import random
import math


class EpsilonGreedy:
    def __init__(self, epsilon=0.1):
        self.epsilon = epsilon

    def select(self, q_values, actions):
        if random.random() < self.epsilon:
            return random.choice(actions)
        max_q = max(q_values[a] for a in actions)
        best = [a for a in actions if q_values[a] == max_q]
        return random.choice(best)


class EpsilonDecreasing:
    def __init__(self, epsilon_start=1.0, epsilon_end=0.1, decay_rate=0.99):
        self.epsilon = epsilon_start
        self.epsilon_end = epsilon_end
        self.decay_rate = decay_rate

    def select(self, q_values, actions):
        if random.random() < self.epsilon:
            return random.choice(actions)
        max_q = max(q_values[a] for a in actions)
        best = [a for a in actions if q_values[a] == max_q]
        return random.choice(best)

    def decay(self):
        self.epsilon = max(self.epsilon_end, self.epsilon * self.decay_rate)


class UCB1:
    def __init__(self, actions):
       
        self.pulls = {a: 0 for a in actions}
        self.total_pulls = 0

    def calculate_ucb(self, a, q_values, pulls, total_pulls):
       
        # returned the method itself instead of the computed number.
        ucb = q_values[a] + math.sqrt((2 * math.log(total_pulls)) / pulls[a])
        return ucb

    def select(self, q_values, actions):
        # fix: try every arm once before the UCB formula is well-defined
       
        untried = [a for a in actions if self.pulls[a] == 0]
        if untried:
            chosen = random.choice(untried)
        else:
            maxucb = max(self.calculate_ucb(a, q_values, self.pulls, self.total_pulls) for a in actions)
            best_actions = [a for a in actions if self.calculate_ucb(a, q_values, self.pulls, self.total_pulls) == maxucb]
            chosen = random.choice(best_actions)

        self.pulls[chosen] += 1
        self.total_pulls += 1
        return chosen


def pull_arm(true_probs, action):
    """Simulate pulling an arm: reward is 1 with the arm's true (hidden)
    probability, else 0."""
    return 1 if random.random() < true_probs[action] else 0


def update_q_value(q_values, counts, totals, action, reward):
    """Simple running average: keep a total reward and a pull count per
    arm, and divide."""
    counts[action] += 1
    totals[action] += reward
    q_values[action] = totals[action] / counts[action]


actions = ['A', 'B', 'C']

# The bandit's TRUE payout probabilities are randomly generated and
# unknown to the agents 
true_probs = {a: random.uniform(0.1, 0.9) for a in actions}
print(f"True (hidden) payout probabilities: {true_probs}\n")

eg = EpsilonGreedy(epsilon=0.1)
ed = EpsilonDecreasing(epsilon_start=1.0, epsilon_end=0.1, decay_rate=0.99)
ucb = UCB1(actions)

# each agent maintains its OWN estimated q_values and pull counts,
# starting from zero, learned entirely from observed rewards
eg_q = {a: 0.0 for a in actions}
eg_counts = {a: 0 for a in actions}
eg_totals = {a: 0 for a in actions}

ed_q = {a: 0.0 for a in actions}
ed_counts = {a: 0 for a in actions}
ed_totals = {a: 0 for a in actions}

ucb_q = {a: 0.0 for a in actions}
ucb_counts = {a: 0 for a in actions}
ucb_totals = {a: 0 for a in actions}

i = 0
while i < 10:
    print(f"Iteration {i+1}:")

    eg_action = eg.select(eg_q, actions)
    eg_reward = pull_arm(true_probs, eg_action)
    update_q_value(eg_q, eg_counts, eg_totals, eg_action, eg_reward)
    print(f"Epsilon-Greedy selected action: {eg_action}, reward: {eg_reward}")

    ed_action = ed.select(ed_q, actions)
    ed_reward = pull_arm(true_probs, ed_action)
    update_q_value(ed_q, ed_counts, ed_totals, ed_action, ed_reward)
    print(f"Epsilon-Decreasing selected action: {ed_action}, reward: {ed_reward}")

    ucb_action = ucb.select(ucb_q, actions)
    ucb_reward = pull_arm(true_probs, ucb_action)
    update_q_value(ucb_q, ucb_counts, ucb_totals, ucb_action, ucb_reward)
    print(f"UCB1 selected action: {ucb_action}, reward: {ucb_reward}")

    ed.decay()
    i += 1

print(f"\nFinal estimated q_values:")
print(f"  Epsilon-Greedy:    {eg_q}")
print(f"  Epsilon-Decreasing: {ed_q}")
print(f"  UCB1:              {ucb_q}")