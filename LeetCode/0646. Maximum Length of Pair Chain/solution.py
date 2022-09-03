"""
205 / 205 test cases passed.
Runtime: 52 ms
Memory Usage: 15.2 MB
"""
class Solution:
    def findLongestChain(self, pairs: List[List[int]]) -> int:
        prev, ans = -inf, 0
        for a, b in sorted(pairs, key=lambda p: p[1]):
            if a > prev:
                prev = b
                ans += 1
        return ans
