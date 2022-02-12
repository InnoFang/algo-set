/**
 * 57 / 57 test cases passed.
 * Runtime: 56 ms
 * Memory Usage: 21.5 MB 
 */
class Solution {
public:
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    int m, n; 
    void dfs(vector<vector<int>> &grid, vector<vector<bool>> &used, int x, int y) {
        if (0 > x || m <= x || 0 > y || n <= y || !grid[x][y] || used[x][y]) {
            return;
        }
        used[x][y] = true;
        for (int i = 0; i < 4; ++ i) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            dfs(grid, used, nx, ny);
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int enclave = 0;
        vector<vector<bool>> used(m, vector<bool>(n));
        for (int i = 0; i < m; ++ i) {
            dfs(grid, used, i, 0);
            dfs(grid, used, i, n - 1);
        }
        for (int i = 1; i < n - 1; ++ i) {
            dfs(grid, used, 0, i);
            dfs(grid, used, m - 1, i);
        }
        for (int i = 1; i < m - 1; ++ i) {
            for (int j = 1; j < n - 1; ++ j) {
                if (grid[i][j] && !used[i][j]) {
                    ++ enclave;
                }
            }
        }
        return enclave;
    }
};
