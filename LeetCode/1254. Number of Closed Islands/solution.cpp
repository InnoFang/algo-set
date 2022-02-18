/**
 * 47 / 47 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 9.1 MB 
 */
class Solution {
public:
    int direct[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    int m, n;
    void dfs(vector<vector<int>> &grid, int x, int y) {
        grid[x][y] = 1;
        for (auto &d : direct) {
            int xx = x + d[0];
            int yy = y + d[1];
            if (xx < 0 || xx >= m || yy < 0 || yy >= n) continue;
            if (grid[xx][yy]) continue;
            dfs(grid, xx, yy);
        }
    }
    int closedIsland(vector<vector<int>>& grid) {
        m = grid.size(), n = grid[0].size();
        for (int i = 0; i < m; ++ i) {
            if (!grid[i][0]) dfs(grid, i, 0);
            if (!grid[i][n - 1]) dfs(grid, i, n - 1);
        }
        for (int i = 1; i < n - 1; ++ i) {
            if (!grid[0][i]) dfs(grid, 0, i);
            if (!grid[m - 1][i]) dfs(grid, m - 1, i);
        }
        int ans = 0;
        for (int i = 1; i < m - 1; ++ i) {
            for (int j = 1; j < n - 1; ++ j) {
                if (!grid[i][j]) {
                    ++ ans;
                    dfs(grid, i, j);
                }
            }
        }
        return ans;
    }
};
