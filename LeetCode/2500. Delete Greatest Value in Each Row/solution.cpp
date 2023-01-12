/**
 * Runtime: 16 ms
 * Memory Usage: 9.1 MB 
 */
class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for (auto &row: grid) {
            sort(row.begin(), row.end());
        }
        int m = grid.size(), n = grid[0].size();
        int ans = 0;
        for (int i = 0; i < n; ++ i) {
            int large = grid[0][i];
            for (int j = 1; j < m; ++ j) {
                large = max(large, grid[j][i]);
            }
            ans += large;
        }
        return ans;
    }
};
