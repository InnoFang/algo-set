"""
Runtime: 36 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def minBitFlips(self, start: int, goal: int) -> int:
        return bin(start ^ goal).count('1')
       
