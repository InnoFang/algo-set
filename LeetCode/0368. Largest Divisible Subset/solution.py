"""
48 / 48 test cases passed.
Runtime: 388 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def largestDivisibleSubset(self, nums: List[int]) -> List[int]:
        nums = sorted(nums)
        largest_subset = []
        dp = [[num] for num in nums]
        for i in range(len(nums)):
            for j in range(i):
                if nums[i] % nums[j] == 0 and len(dp[j]) + 1 > len(dp[i]):
                    dp[i] = dp[j] + nums[i:i+1]
            if len(largest_subset) < len(dp[i]):
                largest_subset = dp[i]
        return largest_subset

