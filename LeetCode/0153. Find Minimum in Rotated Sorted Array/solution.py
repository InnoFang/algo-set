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

"""
150 / 150 test cases passed.
Runtime: 52 ms
Memory Usage: 15.1 MB
"""
class Solution2:
    def findMin(self, nums: List[int]) -> int:
        left, right = 0, len(nums) - 1
        while left < right:
            mid = left + right >> 1
            if nums[mid] < nums[right]:
                right = mid
            else:
                left = mid + 1
        return nums[left]
