"""
1032 / 1032 test cases passed.
Runtime: 36 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def reverse(self, x: int) -> int:
        INT_MAX = (1 << 31) - 1
        INT_MIN = - (1 << 31)
        ans = 0
        while x != 0:
            digit = x % 10
            if x < 0 and digit > 0:
                digit -= 10
            ans = ans * 10 + digit
            x = (x - digit) // 10
            if ans < INT_MIN or ans > INT_MAX:
                return 0
        return ans

"""
1032 / 1032 test cases passed.
Runtime: 36 ms
Memory Usage: 14.8 MB
"""
class Solution2:
    def reverse(self, x: int) -> int:
        ans = str(x) if x >= 0 else str(x)[1:]
        ans = ans[::-1]
        ans = int(ans) if x >= 0 else -1 * int(ans)
        return ans if - (1 << 31) <= ans <= (1 << 31) - 1 else 0
