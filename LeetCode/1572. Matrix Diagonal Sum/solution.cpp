/**
 * Runtime: 8 ms
 * Memory Usage: 10.9 MB 
 */
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size(), mid = n >> 1;
        int ans = -mat[mid][mid] * (n & 1);
        for (int i = 0; i < n; ++ i) {
            ans += mat[i][i] + mat[i][n - 1 - i];
        }
        return ans; 
    }
};
