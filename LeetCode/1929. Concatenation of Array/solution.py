"""
Runtime: 32 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        return [*nums, *nums]
