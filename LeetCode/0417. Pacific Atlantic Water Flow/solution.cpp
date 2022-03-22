/**
 * 113 / 113 test cases passed.
 * Runtime: 36 ms
 * Memory Usage: 16.8 MB 
 */
class Solution {
public:
    int direct[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    void dfs(vector<vector<int>> &grid, vector<vector<bool>> &used, int x, int y) {
        used[x][y] = true;
        for (auto &d : direct) {
            int xx = x + d[0];
            int yy = y + d[1];
            if (xx < 0 || xx >= grid.size() || yy < 0 || yy >= grid[0].size()) continue;
            if (grid[xx][yy] < grid[x][y]) continue;
            if (used[xx][yy]) continue;
            dfs(grid, used, xx, yy);
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m = heights.size(), n = heights[0].size();
        vector<vector<bool>> pacific_used(m, vector<bool>(n));
        vector<vector<bool>> atlantic_used(m, vector<bool>(n));
        for (int i = 0; i < m; ++ i) {
            dfs(heights, pacific_used, i, 0);
            dfs(heights, atlantic_used, i, n - 1);
        }
        for (int i = 0; i < n; ++ i) {
            dfs(heights, pacific_used, 0, i);
            dfs(heights, atlantic_used, m - 1, i);
        }
        vector<vector<int>> ans;
        for (int i = 0; i < m; ++ i) {
            for (int j = 0; j < n; ++ j) {
                if (pacific_used[i][j] && atlantic_used[i][j]) {
                    ans.push_back({i, j});
                }
            }
        }
        return ans;
    }
};
