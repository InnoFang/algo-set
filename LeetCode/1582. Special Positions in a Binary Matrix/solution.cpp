/**
 * 95 / 95 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 12.7 MB 
 */
class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        vector<int> row_sum(n);
        vector<int> col_sum(m);
        for (int i = 0; i < n; ++ i) {
            for (int j = 0; j < m; ++ j) {
                row_sum[i] += mat[i][j];
                col_sum[j] += mat[i][j];
            }
        }
        int ans = 0;
        for (int i = 0; i < n; ++ i) {
            for (int j = 0; j < m; ++ j) {
                if (mat[i][j] == 1 && row_sum[i] == 1 && col_sum[j] == 1) {
                    ++ ans;
                }
            }
        }
        return ans;
    }
};
