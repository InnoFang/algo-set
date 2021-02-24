/**
 * 36 / 36 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 10.2 MB
 */
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> retMat(matrix[0].size(), vector<int>(matrix.size()));
        for (int i = 0; i < retMat.size(); ++ i){
            for (int j = 0; j < retMat[0].size(); ++ j) {
                retMat[i][j] = matrix[j][i];
            }
        }
        return retMat;
    }
};
