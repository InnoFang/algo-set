"""
Runtime: 36 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        if len(sentence) < 26:
            return False;
        mask, a, alphabet = 0, ord('a'), 0x3FFFFFF
        for c in sentence:
            mask |= 1 << (ord(c) - a)
        return mask == alphabet
