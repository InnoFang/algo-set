"""
15 / 15 test cases passed.
Runtime: 48 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def combinationSum4(self, nums: List[int], target: int) -> int:
        dp = [1] + [0] * target
        for i in range(1, target + 1):
            for num in nums:
                if i >= num:
                    dp[i] += dp[i - num]
        return dp[target]
