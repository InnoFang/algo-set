"""
Runtime: 40 ms
Memory Usage: 14.7 MB
"""
class Solution:
    def maximumValue(self, strs: List[str], f=[len, int]) -> int:
        return max(f[s.isdigit()](s) for s in strs)
