"""
Runtime: 24 ms
Memory Usage: 12.3 MB
"""
class Solution:
    def decodeMessage(self, key: str, message: str) -> str:
        mp, it = {}, iter(ascii_lowercase)
        for c in key:
            if c != ' ' and c not in mp:
                mp[c] = next(it) 
        return ''.join(mp.get(c, c) for c in message)
        