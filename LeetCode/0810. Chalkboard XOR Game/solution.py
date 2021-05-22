"""
168 / 168 test cases passed.
Runtime: 88 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def xorGame(self, nums: List[int]) -> bool:
        return True if len(nums) % 2 == 0 else reduce(xor, nums) == 0
