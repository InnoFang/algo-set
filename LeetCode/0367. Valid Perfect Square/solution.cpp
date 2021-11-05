/**
 * 70 / 70 cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.7 MB 
 */
class Solution {
public:
    bool isPerfectSquare(int num) {
        long left = 0, right = num;
        while (left < right) {
            long mid = left + (right - left) / 2;
            if (mid * mid >= num) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return right * right == num;
    }
};
