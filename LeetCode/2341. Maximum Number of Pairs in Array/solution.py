"""
Runtime: 40 ms
Memory Usage: 15 MB
"""
class Solution:
    def numberOfPairs(self, nums: List[int]) -> List[int]:
        pair = sum(c // 2 for c in Counter(nums).values())
        return [pair, len(nums) - pair * 2]
