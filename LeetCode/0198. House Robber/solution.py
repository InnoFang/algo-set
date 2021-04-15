"""
56 / 56 test cases passed.
Runtime: 100 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def rob(self, nums: List[int]) -> int:
        if not nums:
            return 0

        dp = [0] * (len(nums) + 1)
        dp[1] = nums[0]
        for i in range(2, len(nums) + 1):
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i - 1])
        return dp[-1]
