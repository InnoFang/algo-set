"""
1335 / 1335 test cases passed.
Runtime: 28 ms
Memory Usage: 15 MB
"""
class Solution:
    def arrangeCoins(self, n: int) -> int:
        return int((-1 + math.sqrt(1 + 8.0 * n)) / 2)
