"""
283 / 283 test cases passed.
Runtime: 36 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        n = len(cost)
        dp = [0] * (n + 1)
        dp[1] = cost[0]
        for i in range(2, n + 1):
            dp[i] = min(dp[i - 1], dp[i - 2]) + cost[i - 1]
        return min(dp[-1], dp[-2])

"""
283 / 283 test cases passed.
Runtime: 40 ms
Memory Usage: 15.1 MB
"""  
class Solution2:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        a, b = 0, cost[0]
        for i in range(2, len(cost) + 1):
            a, b = b, min(a, b) + cost[i - 1]
        return min(a, b)

"""
283 / 283 test cases passed.
Runtime: 36 ms
Memory Usage: 14.9 MB
"""
class Solution3:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        a, b = 0, 0
        for i in range(2, len(cost) + 1):
            a, b = b, min(a + cost[i - 2], b + cost[i - 1])
        return b
