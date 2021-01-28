"""
742 / 742 test cases passed.
Status: Accepted
Runtime: 60 ms
"""
class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        total = sum(nums)
        part_sum = 0
        for i, num in enumerate(nums):
            if 2 * part_sum + num == total:
                return i
            part_sum += num
        return -1
