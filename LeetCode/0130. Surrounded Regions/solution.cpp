/**
 * 58 / 58 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 9.6 MB 
 */
class Solution {
public:
    int direct[4][2] = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
    int m, n;
    void dfs(vector<vector<char>> &board, int x, int y) {
        if (board[x][y] != 'O') return;
        board[x][y] = 'A';
        for (auto &dir: direct) {
            int xx = x + dir[0];
            int yy = y + dir[1];
            if (xx < 0 || xx >= m || yy < 0 || yy >= n) continue;
            dfs(board, xx, yy);
        }
    }
    void solve(vector<vector<char>>& board) {
        m = board.size(), n = board[0].size();
        for (int i = 0; i < m; ++ i) {
            dfs(board, i, 0);
            dfs(board, i, n - 1);
        }
        for (int i = 0; i < n; ++ i) {
            dfs(board, 0, i);
            dfs(board, m - 1, i);
        }
        for (int i = 0; i < m; ++ i) {
            for (int j = 0; j < n; ++ j) {
                if (board[i][j] == 'A') board[i][j] = 'O';
                else if (board[i][j] == 'O') board[i][j] = 'X';
            }
        }
    }
};
