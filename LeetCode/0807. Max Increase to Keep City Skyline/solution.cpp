/**
 * 133 / 133 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 9.8 MB 
 */
class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> max_rows(n);
        vector<int> max_cols(n);
        for (int i = 0; i < n; ++ i) {
            for (int j = 0; j < n; ++ j) {
                max_rows[i] = max(max_rows[i], grid[i][j]);
                max_cols[j] = max(max_cols[j], grid[i][j]);
            }
        }
        int ans = 0;
        for (int i = 0; i < n; ++ i) {
            for (int j = 0; j < n; ++ j) {
                ans += min(max_rows[i], max_cols[j]) - grid[i][j];
            }
        }
        return ans;
    }
};
