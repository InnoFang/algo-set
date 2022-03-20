"""
53 / 53 test cases passed.
Runtime: 132 ms
Memory Usage: 19.8 MB
"""
class Solution:
    def maxScoreSightseeingPair(self, values: List[int]) -> int:
        dp, ans = float('-inf'), 0
        for i, val in enumerate(values):
            ans = max(ans, dp + val - i)
            dp = max(dp, val + i)
        return ans
