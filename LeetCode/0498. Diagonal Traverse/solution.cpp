/**
 * 32 / 32 test cases passed.
 * Runtime: 40 ms
 * Memory Usage: 20.1 MB 
 */
class Solution {
public:
    int _row_len;
    int _col_len;
    vector<int> traversalDiagonal(vector<vector<int>> &mat, int x, int y, bool reversed) {
        vector<int> diag;
        while (x < _row_len && y >= 0) {
            diag.push_back(mat[x][y]);
            ++ x;
            -- y;
        }
        if (reversed) {
            reverse(diag.begin(), diag.end());
        }
        return diag;
    }
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        _row_len = mat.size();
        _col_len = mat[0].size();
        bool reversed = true;
        vector<int> ans;
        ans.reserve(_row_len * _col_len);
        for (int j = 0; j < _col_len; ++ j) {
            auto diag = traversalDiagonal(mat, 0, j, reversed);
            ans.insert(ans.end(), diag.begin(), diag.end());
            reversed = !reversed;
        }
        for (int i = 1; i < _row_len; ++ i) {
            auto diag = traversalDiagonal(mat, i, _col_len - 1, reversed);
            ans.insert(ans.end(), diag.begin(), diag.end());
            reversed = !reversed;
        }
        return ans;
    }
};
