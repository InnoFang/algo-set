/**
 * 124 / 124  test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 5.8 MB 
 */
class Solution {
public:
    bool judgeSquareSum(int c) {
        for (size_t a = 0; a * a <= c; ++ a) {
            double b = sqrt(c - a * a);
            if (b == (int) b) return true;
        }
        return false;
    }
};
