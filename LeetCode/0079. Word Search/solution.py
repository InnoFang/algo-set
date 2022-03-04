"""
83 / 83 test cases passed.
Runtime: 3712 ms
Memory Usage: 15.2 MB
"""
class Solution:
    def exist(self, board: List[List[str]], word: str) -> bool:
        m, n, ws = len(board), len(board[0]), len(word)
        used = [[False] * n for _ in range(m)]

        def dfs(x, y, k):
            if board[x][y] != word[k]:
                return False
            if k == ws - 1:
                return True
            used[x][y] = True
            for xx, yy in [(x + 1, y), (x - 1, y), (x, y + 1), (x, y - 1)]:
                if 0 <= xx < m and 0 <= yy < n and not used[xx][yy]:
                    if dfs(xx, yy, k + 1):
                        return True
            used[x][y] = False
            return False

        for i in range(m):
            for j in range(n):
                if word[0] == board[i][j]:
                    if dfs(i, j, 0):
                        return True
        return False
