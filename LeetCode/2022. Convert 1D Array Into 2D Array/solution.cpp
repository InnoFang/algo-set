/**
 * 107 / 107 test cases passed.
 * Runtime: 100 ms
 * Memory Usage: 83.2 MB 
 */
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if (original.size() != m * n) return {};
        vector<vector<int>> ret(m, vector<int>(n));
        for (int i = 0; i < m; ++ i) {
            for (int j = 0; j < n; ++ j) {
                ret[i][j] = original[i * n + j];
            }
        }
        return ret;
    }
};
                