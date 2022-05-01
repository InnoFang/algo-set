"""
68 / 68 test cases passed.
Runtime: 32 ms
Memory Usage: 15.9 MB
"""
class Solution:
    def smallestRangeI(self, nums: List[int], k: int) -> int:
        return max(0, max(nums) - min(nums) - 2 * k
