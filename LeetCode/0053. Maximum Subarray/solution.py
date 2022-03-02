"""
209 / 209 test cases passed.
Runtime: 248 ms
Memory Usage: 26 MB
"""
class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        dp = [0] * (len(nums) + 1)
        ans = nums[0]
        for i, num in enumerate(nums):
            dp[i + 1] = max(dp[i] + num, num)
            ans = max(ans, dp[i + 1])
        return ans


"""
209 / 209 test cases passed.
Runtime: 180 ms
Memory Usage: 25.7 MB
"""
class Solution2:
    def maxSubArray(self, nums: List[int]) -> int:
        ans, prev = nums[0], 0
        for i, num in enumerate(nums):
            curr = max(prev + num, num)
            ans = max(ans, curr)
            prev = curr
        return ans
        