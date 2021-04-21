"""
269 / 269 test cases passed.
Runtime: 40 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def numDecodings(self, s: str) -> int:
        if len(s) == 1:
            return 1 if s != '0' else 0
            
        dp = [1] + [0] * len(s)
        for i, num in enumerate(s):
            if num != '0':
                dp[i + 1] = dp[i]
            if "10" <= s[i-1:i+1] <= "26":
                dp[i + 1] += dp[i - 1]
        return dp[-1]
