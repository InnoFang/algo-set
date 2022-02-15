/**
 * 104 / 104 test cases passed.
 * Runtime: 16 ms
 * Memory Usage: 11.3 MB 
 */
class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> minn(m, INT_MAX);
        vector<int> maxn(n);
        for (int i = 0; i < m; ++ i) {
            for (int j = 0; j < n; ++ j) {
                minn[i] = min(minn[i], matrix[i][j]);
                maxn[j] = max(maxn[j], matrix[i][j]);
            }
        }
        vector<int> ans;
        for (int i = 0; i < m; ++ i) {
            for (int j = 0; j < n; ++ j) {
                if (minn[i] == maxn[j]) {
                    ans.push_back(matrix[i][j]);
                }
            }
        }
        return ans;
    }
};
