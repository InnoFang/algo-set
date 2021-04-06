"""
161 / 161 test cases passed.
Runtime: 32 ms
Memory Usage: 15.6 MB
"""
class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if not nums:
            return 0
        size = 0
        for num in nums[1:]:
            if nums[size] != num:
                size += 1
                nums[size] = num
        return size + 1
