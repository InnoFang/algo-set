/**
 * 133 / 133 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 9.3 MB 
 */
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int left = 0, right = m * n - 1;
        while (left < right) {
            int mid = (right + left + 1) >> 1;
            if (matrix[mid / n][mid % n] <= target) {
                left = mid;
            } else {
                right = mid - 1;
            }
        }
        return matrix[right / n][right % n] == target;
    }
};
