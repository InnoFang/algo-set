/**
 * 82 / 82 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 8.4 MB 
 */
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int len = A.size();
        for (int i = 0; i < len; ++ i) {
            for (int l = 0, r = len - 1; l < r; l++, r--) {
                if (A[i][l] == A[i][r]) {
                    A[i][l] ^= 1;
                    A[i][r] ^= 1;
                }
            }
            if (len & 1) {
                A[i][len >> 1] ^= 1;
            }
        }
        return A;
    }
};
