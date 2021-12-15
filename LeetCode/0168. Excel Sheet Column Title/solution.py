"""
18 / 18 test cases passed.
Runtime: 28 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def convertToTitle(self, columnNumber: int) -> str:
        ans = []
        while columnNumber != 0:
            columnNumber -= 1
            ans.append(chr(65 + columnNumber % 26))
            columnNumber //= 26
        return ''.join(ans[::-1])
