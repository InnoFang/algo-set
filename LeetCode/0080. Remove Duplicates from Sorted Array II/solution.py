"""
164 / 164 test cases passed.
Runtime: 44 ms
Memory Usage: 14.6 MB
"""
class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        size = 0
        for num in nums:
            if size < 2 or nums[size - 2] != num:
                nums[size] = num
                size += 1
        return size