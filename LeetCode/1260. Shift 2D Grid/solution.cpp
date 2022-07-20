/**
 * 107 / 107 test cases passed.
 * Runtime: 28 ms
 * Memory Usage: 13.6 MB 
 */
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> ans(m, vector<int>(n));
        for (int i = 0; i < m; ++ i) {
            for (int j = 0; j < n; ++ j) {
                int index = (i * n + j + k) % (m * n);
                ans[index / n][index % n] = grid[i][j];
            }
        }
        return ans;
    }
};
