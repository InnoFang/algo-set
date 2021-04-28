"""
124 / 124 test cases passed.
Runtime: 164 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def judgeSquareSum(self, c: int) -> bool:
        l, r = 0, int(sqrt(c))
        while l * l + r * r != c and l <= r:
            if l * l + r * r > c:
                r -= 1
            else:
                l += 1
        return True if l <= r else False
