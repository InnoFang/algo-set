"""
Runtime: 36 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def isStrictlyPalindromic(self, n: int) -> bool:
        # the number n in base (n - 2) is always 12, which is not palindromic
        return False
