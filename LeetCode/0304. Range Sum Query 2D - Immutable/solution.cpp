/**
 * 12 / 12 test cases passed.
 * Runtime: 16 ms
 * Memory Usage: 15 MB 
 */
class NumMatrix {
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        if (m > 0) {
            int n = matrix[0].size();
            prefixSum2D.resize(m + 1, vector<int>(n + 1));
            for (int i = 0; i < m; ++ i) {
                for (int j = 0; j < n; ++ j) {
                    prefixSum2D[i + 1][j + 1] = matrix[i][j] + prefixSum2D[i + 1][j] + prefixSum2D[i][j + 1] - prefixSum2D[i][j];
                }
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        if (prefixSum2D.size() < 0) return 0;
        return prefixSum2D[row2 + 1][col2 + 1] - prefixSum2D[row2 + 1][col1] - prefixSum2D[row1][col2 + 1] + prefixSum2D[row1][col1];
    }
private:
    vector<vector<int>> prefixSum2D;
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
