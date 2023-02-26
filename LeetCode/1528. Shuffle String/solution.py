"""
Runtime: 60 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        rec = [''] * len(s)
        for c, i in zip(s, indices):
            rec[i] = c
        return ''.join(rec)
