/**
 * 203 / 203 test cases passed.
 * Runtime: 52 ms
 * Memory Usage: 22.7 MB 
 */
class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m = img.size(), n = img[0].size();
        vector<vector<int>> psum(m + 1, vector<int>(n + 1));
        for (int i = 1; i <= m; ++ i) {
            for (int j = 1; j <= n; ++ j) {
                psum[i][j] = psum[i - 1][j] + psum[i][j - 1] - psum[i - 1][j - 1] + img[i - 1][j - 1];
            }
        }
        vector<vector<int>> ans(m, vector<int>(n));
        for (int i = 0; i < m; ++ i) {
            for (int j = 0; j < n; ++ j) {
                int left = max(0, j - 1), right = min(n - 1, j + 1);
                int top = max(0, i - 1), bottom = min(m - 1, i + 1);
                int count = (right - left + 1) * (bottom - top + 1);
                int sum = psum[bottom + 1][right + 1] - psum[bottom + 1][left] - psum[top][right + 1] + psum[top][left];
                ans[i][j] = sum / count;
            }
        }
        return ans;
    }
};
