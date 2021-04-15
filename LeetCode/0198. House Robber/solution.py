"""
68 / 68 test cases passed.
Runtime: 40 ms
Memory Usage: 14.7 MB
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


"""
68 / 68 test cases passed.
Runtime: 36 ms
Memory Usage: 14.7 MB
"""
class Solution2:
    def rob(self, nums: List[int]) -> int:
        last, curr = 0, 0
        for num in nums:
            last, curr = curr, max(last + num, curr)
        return curr
