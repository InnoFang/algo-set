"""
3999 / 3999 test cases passed.
Runtime: 52 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def intToRoman(self, num: int) -> str:
        values = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1]
        symbols = ['M', 'CM', 'D', 'CD', 'C', 'XC', 'L', 'XL', 'X', 'IX', 'V', 'IV', 'I']
        ans = ''
        for value, symbol in zip(values, symbols):
            while num >= value:
                num -= value
                ans += symbol
        return ans
