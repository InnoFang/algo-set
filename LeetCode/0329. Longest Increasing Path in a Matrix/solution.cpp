/**
 * 138 / 138 test cases passed.
 * Runtime: 40 ms
 * Memory Usage: 15.6 MB 
 */
class Solution {
public:
    int direct[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    int m, n;
    int dfs(vector<vector<int>> &matrix, vector<vector<int>> &memo, int x, int y) {
        if (memo[x][y] != 0) return memo[x][y];
        ++ memo[x][y];
        for (auto &dir: direct) {
            int xx = x + dir[0];
            int yy = y + dir[1];
            if (xx < 0 || xx >= m || yy < 0 || yy >= n || matrix[xx][yy] <= matrix[x][y]) continue;
            memo[x][y] = max(memo[x][y], dfs(matrix, memo, xx, yy) + 1);
        }
        return memo[x][y];
    }

    int longestIncreasingPath(vector<vector<int>>& matrix) {
        m = matrix.size(), n = matrix[0].size();
        vector<vector<int>> memo(m, vector<int>(n));
        int ans = 0;
        for (int i = 0; i < m; ++ i) {
            for (int j = 0; j < n; ++ j) {
                ans = max(ans, dfs(matrix, memo, i, j));
            }
        }
        return ans;
    }
    
};
