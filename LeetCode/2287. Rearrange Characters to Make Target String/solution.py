"""
115 / 115 test cases passed.
Runtime: 32 ms
Memory Usage: 14.9 MB
"""
from collections import Counter
class Solution:
    def rearrangeCharacters(self, s: str, target: str) -> int:
        scnt = Counter(list(s))
        tcnt = Counter(list(target))
        ans = 105
        for t in target:
            ans = min(ans, scnt[t] // tcnt[t])     
        return ans    
