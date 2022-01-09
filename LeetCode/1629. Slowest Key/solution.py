"""
109 / 109 test cases passed.
Runtime: 48 ms
Memory Usage: 15.2 MB
"""
class Solution:
    def slowestKey(self, releaseTimes: List[int], keysPressed: str) -> str:
        n, max_cost, slowest_key = len(keysPressed), releaseTimes[0], keysPressed[0]
        for i in range(1, n):
            cost = releaseTimes[i] - releaseTimes[i - 1]
            if cost > max_cost or \
               cost == max_cost and keysPressed[i] > slowest_key:
               slowest_key = keysPressed[i]
               max_cost = cost
        return slowest_key
