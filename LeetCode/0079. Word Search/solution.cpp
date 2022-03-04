/**
 * 83 / 83 test cases passed.
 * Runtime: 212 ms
 * Memory Usage: 7.9 MB 
 */
class Solution {
public:
    int m, n;
    int direct[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    bool dfs(vector<vector<char>> &board, vector<vector<bool>> &used, int x, int y, string &word, int idx) {
        if (word[idx] != board[x][y]) return false;
        if (idx == word.size() - 1)  return true;
        used[x][y] = true;
        for (auto &dir: direct) {
            int xx = x + dir[0];
            int yy = y + dir[1];
            if (xx < 0 || xx >= m || yy < 0 || yy >= n || used[xx][yy]) continue;
            if (dfs(board, used, xx, yy, word, idx + 1)) {
                return true;
            }
        }
        used[x][y] = false;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        m = board.size(), n = board[0].size();
        vector<vector<bool>> used(m, vector<bool>(n));
        for (int i = 0; i < m; ++ i) {
            for (int j = 0; j < n; ++ j) {
                if (board[i][j] == word[0]) {
                    if (dfs(board, used, i, j, word, 0)) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
