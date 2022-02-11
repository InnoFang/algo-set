"""
118 / 118 test cases passed.
Runtime: 52 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def minimumDifference(self, nums: List[int], k: int) -> int:
        nums.sort()
        lowest, highest = nums[0], nums[k - 1]
        ans = highest - lowest
        for i in range(k, len(nums)):
            lowest, highest = nums[i - k + 1], nums[i]
            ans = min(ans, highest - lowest)
        return ans
