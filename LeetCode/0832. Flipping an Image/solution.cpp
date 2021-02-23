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

/**
 * 82 / 82 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 8.2 MB 
 */
class Solution2 {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int len = A.size();
        for (int i = 0; i < len; ++ i) {
            reverse(A[i].begin(), A[i].end());
            for (int j = 0; j < len; ++ j) {
                A[i][j] ^= 1;
            }
        }
        return A;
    }
};
