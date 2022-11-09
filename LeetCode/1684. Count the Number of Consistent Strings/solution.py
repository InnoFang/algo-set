"""
Runtime: 200 ms
Memory Usage: 16.7 MB
"""
from functools import reduce
class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        tocode = lambda s: reduce(lambda x, y: x | (1 << (ord(y) - ord('a'))), s, 0)
        allowed_code = tocode(allowed)
        ans = 0
        for word in words:
            ans += 1 if (allowed_code | tocode(word)) == allowed_code else 0
        return ans
