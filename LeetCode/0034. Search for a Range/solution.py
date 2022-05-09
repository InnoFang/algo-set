"""
88 / 88 test cases passed.
Runtime: 40 ms
Memory Usage: 15.9 MB
"""
class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        last_index = len(nums) - 1
        def floor(l, r):
            while l <= r:
                mid = l + (r - l) // 2
                if nums[mid] >= target:
                    r = mid - 1
                else:
                    l = mid + 1
            return l
        def ceil(l, r):
            while l <= r:
                mid = l + (r - l) // 2
                if nums[mid] <= target:
                    l = mid + 1
                else:
                    r = mid - 1
            return r
        left, right = floor(0, last_index), ceil(0, last_index)
        return [left, right] if left <= right and nums[left] == target and nums[right] == target else [-1, -1]
