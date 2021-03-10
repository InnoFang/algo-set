"""
109 / 109 test cases passed.
Runtime: 72 ms
Memory Usage: 16.8 MB
"""
class Solution:
    def calculate(self, s: str) -> int:
        formula = s + '$'
        nums = []
        sign = '+'
        num = 0
        for c in formula:
            if c == ' ':
                continue
            if c.isdigit():
                num = num * 10 + int(c)
            else:
                if sign == '+':
                    nums.append(num)
                elif sign == '-':
                    nums.append(-num)
                elif sign == '*':
                    nums[-1] *= num
                elif sign == '/':
                    nums[-1] = int(nums[-1] / num)
                sign = c
                num = 0
        return sum(nums)
