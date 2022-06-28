"""
140 / 140 test cases passed.
Runtime: 40 ms
Memory Usage: 15 MB
"""
class Solution:
    def buildArray(self, nums: List[int]) -> List[int]:
        return [nums[num] for num in nums]
