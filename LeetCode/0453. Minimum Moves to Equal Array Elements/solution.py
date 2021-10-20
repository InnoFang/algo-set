"""
84 / 84 test cases passed.
Runtime: 36 ms
Memory Usage: 15.8 MB
"""
class Solution:
    def minMoves(self, nums: List[int]) -> int:
        return sum(nums) - len(nums) * min(nums)
