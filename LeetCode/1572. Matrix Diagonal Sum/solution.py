"""
Runtime: 32 ms
Memory Usage: 15.2 MB
"""
class Solution:
    def diagonalSum(self, mat: List[List[int]]) -> int:
        n = len(mat)
        mid= n >> 1
        ans = -mat[mid][mid] * (n & 1)
        for i in range(n):
            ans += mat[i][i] + mat[i][n - 1 - i]
        return ans
