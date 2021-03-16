/**
 * 20 / 20 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 6.4 MB 
 */
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int l = 0, r = n -1,
            u = 0, d = n - 1;
        int count = 1;
        vector<vector<int>> matrix(n, vector<int>(n));
        while (true) {
            for (int i = l; i <= r; ++ i) matrix[u][i] = count ++;
            if (++ u > d) break;
            for (int i = u; i <= d; ++ i) matrix[i][r] = count ++;
            if (-- r < l) break;
            for (int i = r; i >= l; -- i) matrix[d][i] = count ++;
            if (-- d < u) break;
            for (int i = d; i >= u; -- i) matrix[i][l] = count ++;
            if (++ l > r) break;
        }
        return matrix;
    }
};
