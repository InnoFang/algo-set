"""
Runtime: 36 ms
Memory Usage: 15 MB
"""
class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        m = collections.Counter(nums)
        return sum(v * (v - 1) // 2 for k, v in m.items())
