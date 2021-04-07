"""
279 / 279 test cases passed.
Runtime: 36 ms
Memory Usage: 15 MB
"""
class Solution:
    def search(self, nums: List[int], target: int) -> bool:
        l, r = 0, len(nums) - 1
        while l <= r:
            mid = l + ((r - l) >> 1)
            if nums[mid] == target:
                return True
            if nums[mid] == nums[l]:
                l += 1
                continue
            if nums[l] <= nums[mid]:
                if nums[l] <= target < nums[mid]:
                    r = mid - 1
                else:
                    l = mid + 1
            else:
                if nums[mid] < target <= nums[r]:
                    l = mid + 1
                else:
                    r = mid - 1
        return False
