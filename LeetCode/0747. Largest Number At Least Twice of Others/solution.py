"""
232 / 232 test cases passed.
Runtime: 36 ms
Memory Usage: 15 MB
"""
class Solution:
    def dominantIndex(self, nums: List[int]) -> int:
        n = len(nums)
        if n == 1:
            return 0
        first, second = 0, -1
        for i in range(1, n):
            if nums[i] > nums[first]:
                second = first
                first = i
            elif second == -1 or nums[i] > nums[second]:
                second = i
        return first if nums[first] >> 1 >= nums[second] else -1
