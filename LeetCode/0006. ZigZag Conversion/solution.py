"""
1157 / 1157 test cases passed.
Runtime: 52 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def convert(self, s: str, numRows: int) -> str:
        n, r = len(s), numRows
        if r == 1 or r >= n:
            return s
        x, period = 0, 2 * r - 2
        mat = [""] * r
        for i in range(n):
            mat[x] += s[i]
            if i % period < r - 1:
                x += 1
            else:
                x -= 1
        return "".join(mat)
