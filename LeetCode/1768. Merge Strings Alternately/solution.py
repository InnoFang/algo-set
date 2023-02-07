"""
Runtime: 44 ms
Memory Usage: 15 MB
"""
from itertools import zip_longest

class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        return ''.join(a + b for a, b in zip_longest(word1, word2, fillvalue=''))
