"""
166 / 166 test cases passed.
Runtime: 92 ms
Memory Usage: 15.4 MB
"""
class Solution:
    def canJump(self, nums: List[int]) -> bool:
        farthest = 0
        for i, num in enumerate(nums):
            if i > farthest:
                return False
            farthest = max(farthest, i + num)
        return True
