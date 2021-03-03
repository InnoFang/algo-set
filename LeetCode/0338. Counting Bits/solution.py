"""
15 / 15 test cases passed.
Runtime: 84 ms
Memory Usage: 21.4 MB
"""
class Solution:
    def countBits(self, num: int) -> List[int]:
        dp = [0] * (num + 1)
        for i in range(num + 1):
            dp[i] = dp[i >> 1] + (i & 1)
        return dp
