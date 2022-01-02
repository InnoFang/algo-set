"""
3377 / 3377 test cases passed.
Runtime: 44 ms
Memory Usage: 15 MB
"""
class Solution:
    def lastRemaining(self, n: int) -> int:
        head, step, left = 1, 1, True
        while n > 1:
            if left or n & 1 == 1:
                head += step
            step <<= 1
            n >>= 1
            left = not left
        return head
    