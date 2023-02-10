"""
Runtime: 28 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def areOccurrencesEqual(self, s: str) -> bool:
        cnt = Counter(s)
        p = len(s) // len(cnt)
        return all(p == q for q in cnt.values())
