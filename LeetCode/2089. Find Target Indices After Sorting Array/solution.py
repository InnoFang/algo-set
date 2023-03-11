""" 
Runtime: 40 ms
Memory Usage: 15 MB
"""
class Solution:
    def targetIndices(self, nums: List[int], target: int) -> List[int]:
        nums.sort()
        return [i for i, num in enumerate(nums) if num == target]
