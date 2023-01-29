"""
Runtime: 40 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def prefixCount(self, words: List[str], pref: str) -> int:
        return sum(word.startswith(pref) for word in words)
