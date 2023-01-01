"""
Runtime: 36 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def repeatedCharacter(self, s: str) -> str:
        a = ord('a')
        alphabet = [0] * 26
        for c in s:
            alphabet[ord(c) - a] += 1
            if alphabet[ord(c) - a] == 2:
                return c
        return ''
