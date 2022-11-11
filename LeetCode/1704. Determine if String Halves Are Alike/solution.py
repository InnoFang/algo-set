"""
Runtime: 36 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        vowels = 'aeiouAEIOU'
        h = len(s) >> 1
        return sum(c in vowels for c in s[:h]) == sum(c in vowels for c in s[h:])
