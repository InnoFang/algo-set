"""
Runtime: 40 ms
Memory Usage: 15 MB
"""
class Solution:
    def customSortString(self, order: str, s: str) -> str:
        prior = defaultdict(int)
        for i, c in enumerate(order):
            prior[c] = i
        return "".join(sorted(s, key=lambda x: prior[x]))
 