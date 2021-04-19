"""
113 / 113 test cases passed.
Runtime: 40 ms
Memory Usage: 15 MB
"""
class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        size = 0
        for num in nums:
            if num != val:
                nums[size] = num
                size += 1
        return size
