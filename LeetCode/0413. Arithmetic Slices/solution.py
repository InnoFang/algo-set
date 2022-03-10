"""
15 / 15 test cases passed.
Runtime: 40 ms
Memory Usage: 15 MB
"""
class Solution:
    def numberOfArithmeticSlices(self, nums: List[int]) -> int:
        n = len(nums)
        if n < 3:
            return 0
        dp = [0] * n
        for i in range(1, n - 1):
            if nums[i] - nums[i - 1] == nums[i + 1] - nums[i]:
                dp[i + 1] = dp[i] + 1
        return sum(dp)
