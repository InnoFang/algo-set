"""
Runtime: 24 ms
Memory Usage: 15 MB
"""
class Solution:
    def squareIsWhite(self, c: str) -> bool:
        return bool(ord(c[0]) & 1 ^ ord(c[1]) & 1)
