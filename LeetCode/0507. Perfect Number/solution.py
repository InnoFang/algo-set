"""
98 / 98 test cases passed.
Runtime: 36 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def checkPerfectNumber(self, num: int) -> bool:
        return num in [6, 28, 496, 8128, 33550336]

"""
98 / 98 test cases passed.
Runtime: 40 ms
Memory Usage: 15.1 MB
"""
class Solution2:
    def checkPerfectNumber(self, num: int) -> bool:
        if num == 1:
            return False
        total = 1
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                total += i
                total += num / i if i * i != num else 0
        return total == num
