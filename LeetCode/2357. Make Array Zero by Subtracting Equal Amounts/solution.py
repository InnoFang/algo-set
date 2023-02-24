"""
Runtime: 40 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def minimumOperations(self, nums: List[int]) -> int:
        return len(set(nums) - {0}) 
