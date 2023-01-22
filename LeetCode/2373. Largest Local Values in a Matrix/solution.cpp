/**
 * Runtime: 16 ms
 * Memory Usage: 10.9 MB 
 */
class Solution {
public:
    int maxPoolingKernel(vector<vector<int>> &grid, int x, int y) {
        int ret = 0;
        for (int i = x; i < x + 3; ++ i) {
            for (int j = y; j < y + 3; ++ j) {
                ret = max(ret, grid[i][j]);
            }
        }
        return ret;
    }
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> ans(n - 2, vector<int>(n - 2, 0));
        for (int i = 0; i < n - 2; ++ i) {
            for (int j = 0; j < n - 2; ++ j) {
                ans[i][j] = maxPoolingKernel(grid, i, j);
            }
        }
        return ans;
    }
};
