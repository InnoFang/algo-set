"""
402 / 402 test cases passed.
Runtime: 32 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def isHappy(self, n: int) -> bool:
        def get_next(t):
            nxt = 0
            while t > 0:
                t, digit = divmod(t, 10)
                nxt += digit ** 2
            return nxt
        seen = set()
        while n != 1 and n not in seen:
            seen.add(n)
            n = get_next(n)
        return n == 1
