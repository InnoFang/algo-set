"""
16 / 16 test cases passed.
Runtime: 56 ms
Memory Usage: 20.2 MB
"""
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        return len(set(nums)) != len(nums)

