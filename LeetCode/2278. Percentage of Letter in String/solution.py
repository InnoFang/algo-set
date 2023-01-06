"""
Runtime: 28 ms
Memory Usage: 15 MB
"""
class Solution:
    def percentageLetter(self, s: str, letter: str) -> int:
        return 100 * sum(1 if c == letter else 0 for c in s) // len(s)
        