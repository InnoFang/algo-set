"""
58 / 58 test cases passed.
Runtime: 48 ms
Memory Usage: 19.4 MB
"""
class Solution:
    def solve(self, board: List[List[str]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        m, n = len(board), len(board[0])
        def dfs(x, y):
            if board[x][y] != 'O': return
            board[x][y] = 'A'
            for xx, yy in [(x + 1, y), (x - 1, y), (x, y + 1), (x, y - 1)]:
                if 0 <= xx < m and 0 <= yy < n:
                    dfs(xx, yy)
        for i in range(m):
            dfs(i, 0)
            dfs(i, n - 1)
        for i in range(n):
            dfs(0, i)
            dfs(m - 1, i)
        for i in range(m):
            for j in range(n):
                if board[i][j] == 'A': board[i][j] = 'O'
                elif board[i][j] == 'O': board[i][j] = 'X'
        