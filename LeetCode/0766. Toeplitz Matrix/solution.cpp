/**
 * 483 / 483 test cases passed.
 * Runtime: 20 ms
 * Memory Usage: 16.9 MB 
 */
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size(), cols = matrix[0].size();
        for (int i = 0; i < rows; ++ i) {
            int r = i, c = 0;
            while (r < rows && c < cols) {
                if (matrix[r++][c++] != matrix[i][0]) {
                    return false;
                }
            }
        }
        for (int i = 1; i < cols; ++ i) {
            int r = 0, c = i;
            while (r < rows && c < cols) {
                if (matrix[r++][c++] != matrix[0][i]) {
                    return false;
                }
            }
        }
        return true;
    }
};
