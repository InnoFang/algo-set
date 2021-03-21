/**
 * 164 / 164 test cases passed.
 * Runtime: 28 ms
 * Memory Usage: 12.8 MB 
 */
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool col0 = false, row0 = false;
        for (int i = 0; i < matrix.size(); ++ i) {
            if (!matrix[i][0]) {
                col0 = true;
                break;
            }
        }
        for (int i = 0; i < matrix[0].size(); ++ i) {
            if (!matrix[0][i]) {
                row0 = true;
                break;
            }
        }
        for (int i = 1; i < matrix.size(); ++ i) {
            for (int j = 1; j < matrix[0].size(); ++ j) {
                if (!matrix[i][j]) {
                    matrix[i][0] = matrix[0][j] = 0;
                }
            } 
        }
        for (int i = 1; i < matrix.size(); ++ i) {
            for (int j = 1; j < matrix[0].size(); ++ j) {
                if (!matrix[i][0] || !matrix[0][j]) {
                    matrix[i][j] = 0;
                }
            } 
        }
        if (col0) {
            for (int i = 0; i < matrix.size(); ++ i) {
                matrix[i][0] = 0;
            }
        }
        if (row0) {
            for (int i = 0; i < matrix[0].size(); ++ i) {
                matrix[0][i] = 0;
            }
        }
    }
};
