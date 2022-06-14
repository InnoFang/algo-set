"""
32 / 32 test cases passed.
Runtime: 56 ms
Memory Usage: 16.9 MB
"""
class Solution:
    def findDiagonalOrder(self, mat: List[List[int]]) -> List[int]:
        n, m = len(mat), len(mat[0])
        ans = []
        def traversal(x, y, r):
            diag = []
            while x < n and y >= 0:
                diag.append(mat[x][y])
                x += 1
                y -= 1
            return diag[::-1] if r else diag
            
        reversed = True
        for j in range(m):
            ans.extend(traversal(0, j, reversed))
            reversed = not reversed
        for i in range(1, n):
            ans.extend(traversal(i, m - 1, reversed))
            reversed = not reversed
        return ans
