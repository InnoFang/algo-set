"""
114 / 114 test cases passed.
Runtime: 28 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def toLowerCase(self, s: str) -> str:
        return ''.join([c.lower() if 'A' <= c <= 'Z' else c for c in s])
    
