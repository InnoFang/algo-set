"""
31 / 31 test cases passed.
Status: Accepted
Runtime: 44 ms
"""
class Solution:
    def fib(self, N: int) -> int:
        a, b, ans = 0, 1, 0
        for i in range(N):
            ans = b
            b = a + b
            a = ans
        return ans
