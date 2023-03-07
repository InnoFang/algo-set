""" 
Runtime: 40 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def freqAlphabets(self, s: str) -> str:
        ans = ''
        base = ord('a') - 1
        for i, c in enumerate(s):
            if c == '#':
                ans = ans[:-2]
                ans += chr(base + int(s[i-2:i]))
            elif c == '0':
                ans += ' '
            else:
                ans += chr(base + int(c))
        return ans
