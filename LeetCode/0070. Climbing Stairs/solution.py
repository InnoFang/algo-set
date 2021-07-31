"""
45 / 45 test cases passed.
Runtime: 28 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def climbStairs(self, n: int) -> int:
        steps = [0] * (n + 1)
        steps[0], steps[1] = 1, 1
        for i in range(2, n + 1):
            steps[i] = steps[i - 1] + steps[i - 2]
        return steps[n]

"""
45 / 45 test cases passed.
Runtime: 28 ms
Memory Usage: 14.9 MB
"""
class Solution2:
    def climbStairs(self, n: int) -> int:
        a, b = 1, 1
        for i in range(2, n + 1):
            a, b = b, a + b
        return b
