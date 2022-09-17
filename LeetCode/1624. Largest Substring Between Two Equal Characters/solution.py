"""
54 / 54 test cases passed.
Runtime: 36 ms
Memory Usage: 15 MB
"""
class Solution:
    def maxLengthBetweenEqualCharacters(self, s: str) -> int:
        rec = {}
        ans = -1
        for i, c in enumerate(s):
            if c in rec:
                ans = max(ans, i - rec[c] - 1)
            else:
                rec[c] = i    
        return ans 
        