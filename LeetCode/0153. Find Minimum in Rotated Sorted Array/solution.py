"""
150 / 150 test cases passed.
Runtime: 56 ms
Memory Usage: 15.2 MB
"""
class Solution:
    def findMin(self, nums: List[int]) -> int:
        left, right = 0, len(nums) - 1
        while left <= right:
            if nums[left] <= nums[right]:
                return nums[left]
            mid = left + right >> 1
            if nums[mid] >= nums[0]:
                left = mid + 1
            else:
                right = mid
        return nums[left]
