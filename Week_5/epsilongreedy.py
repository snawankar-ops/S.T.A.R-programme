import random
import math

from numpy import log

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
    def __init__(self, epsilon_start=1.0, epsilon_end=0.1, decay_rate=0.5):
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
    def __init__(self, pulls=0, total_pulls=0):
        self.pulls = pulls
        self.total_pulls = total_pulls

    def calculate_ucb(self, a, q_value, pulls, total_pulls):
        ucb = q_value[a] + math.sqrt((2*log(total_pulls)) / pulls[a])
        return self.calculate_ucb

    def select(self, q_values, actions):
        maxucb = max(self.calculate_ucb(a, q_values, self.pulls, self.total_pulls) for a in actions)
        best_action = [a for a in actions if self.calculate_ucb(a, q_values, self.pulls, self.total_pulls) == maxucb]
        self.pulls += 1
        self.total_pulls += 1
        return random.choice(best_action)


actions = ['A', 'B', 'C']
q_values = {'A': 0.5, 'B': 0.7, 'C': 0.6}

eg = EpsilonGreedy(epsilon=0.1)
ed = EpsilonDecreasing(epsilon_start=1.0, epsilon_end=0.1, decay_rate=0.5)
ucb = UCB1(pulls=0, total_pulls=0)

i = 0
while i < 10:
    print(f"Iteration {i+1}:")
    print(f"Epsilon-Greedy selected action: {eg.select(q_values, actions)}")
    print(f"Epsilon-Decreasing selected action: {ed.select(q_values, actions)}")
    print(f"UCB1 selected action: {ucb.select(q_values, actions)}")
    ed.decay()
    i += 1
