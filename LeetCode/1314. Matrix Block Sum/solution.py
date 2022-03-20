"""
12 / 12 test cases passed.
Runtime: 108 ms
Memory Usage: 16.5 MB
"""
class Solution:
    def matrixBlockSum(self, mat: List[List[int]], k: int) -> List[List[int]]:
        m, n = len(mat), len(mat[0])
        psum = [[0] * (n + 1) for _ in range(m + 1)]
        for i in range(1, m + 1):
            for j in range(1, n + 1):
                psum[i][j] = psum[i - 1][j] + psum[i][j - 1] - psum[i - 1][j - 1] + mat[i - 1][j - 1]
        def get(x, y):
            x = max(min(x, m), 0)
            y = max(min(y, n), 0)
            return psum[x][y]
        ans = [[0] * n for _ in range(m)]
        for i in range(m):
            for j in range(n):
                ans[i][j] = get(i + k + 1, j + k + 1) - get(i - k, j + k + 1) - get(i + k + 1, j - k) + get(i - k, j - k)
        return ans
