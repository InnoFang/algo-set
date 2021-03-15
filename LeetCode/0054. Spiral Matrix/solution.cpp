/**
 * 22 / 22 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6.7 MB 
 */
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if (matrix.empty()) return ans;
        int u = 0, d = matrix.size() - 1;
        int l = 0, r = matrix[0].size() - 1;
        while (true) {
            for (int i = l; i <= r; ++ i) ans.push_back(matrix[u][i]);
            if (++ u > d) break;
            for (int i = u; i <= d; ++ i) ans.push_back(matrix[i][r]);
            if (-- r < l) break;
            for (int i = r; i >= l; -- i) ans.push_back(matrix[d][i]);
            if (--d < u) break;
            for (int i = d; i >= u; -- i) ans.push_back(matrix[i][l]);
            if (++ l > r) break;
        }
        return ans;
    }
};
