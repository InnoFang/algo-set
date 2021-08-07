"""
203 / 203 test cases passed.
Runtime: 32 ms
Memory Usage: 15.3 MB
"""
class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        dp = [0] * (len(nums) + 1)
        ans = nums[0]
        for i, num in enumerate(nums):
            dp[i + 1] = max(dp[i] + num, num)
            ans = max(ans, dp[i + 1])
        return ans
