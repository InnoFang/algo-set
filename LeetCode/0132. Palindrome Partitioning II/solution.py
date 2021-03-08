"""
29 / 29 test cases passed.
Runtime: 388 ms
Memory Usage: 31.1 MB
"""
class Solution:
    def minCut(self, s: str) -> int:
        n = len(s)
        g = [[True] * n for _ in range(n)]
        for i in range(n - 1, -1, -1):
            for j in range(i + 1, n):
                g[i][j] = s[i] == s[j] and g[i + 1][j - 1]
        
        f = [0] * n
        for i in range(1, n):
            if g[0][i]:
                f[i] = 0
            else:
                f[i] = f[i - 1] + 1
                for j in range(1, i):
                    if g[j][i]:
                        f[i] = min(f[i], f[j - 1] + 1)
        return f[n - 1]
