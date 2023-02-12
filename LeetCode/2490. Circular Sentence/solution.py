"""
Runtime: 48 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def isCircularSentence(self, sentence: str) -> bool:
        return sentence[0] == sentence[-1] and all(sentence[i - 1] == sentence[i + 1] for i, c in enumerate(sentence) if c == ' ')
