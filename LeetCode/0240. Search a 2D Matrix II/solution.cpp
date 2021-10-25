/**
 * 129 / 129 test cases passed.
 * Runtime: 80 ms
 * Memory Usage: 14.4 MB 
 */
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(), cols = matrix[0].size();
        int x = 0, y = cols - 1;
        while (x < rows && y >= 0) {
            if (matrix[x][y] > target) y--;
            else if (matrix[x][y] < target) x++;
            else return true;
        }
        return false;
    }
};
