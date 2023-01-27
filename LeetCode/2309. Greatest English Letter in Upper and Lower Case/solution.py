"""
Runtime: 28 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def greatestLetter(self, s: str) -> str:
        rec = set(s)
        for l, u in zip(reversed(ascii_lowercase), reversed(ascii_uppercase)):
            if l in rec and u in rec:
                return u
        return ""
