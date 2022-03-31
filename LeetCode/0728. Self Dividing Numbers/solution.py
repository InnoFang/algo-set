"""
31 / 31 test cases passed.
Runtime: 48 ms
Memory Usage: 15 MB
"""
class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        def is_self_dividing(n):
            x = n
            while x:
                x, d = divmod(x, 10)
                if d == 0 or n % d != 0:
                    return False
            return True
        return [i for i in range(left, right + 1) if is_self_dividing(i)]
