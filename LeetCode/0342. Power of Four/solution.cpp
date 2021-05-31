/**
 * 1061 / 1061 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6 MB 
 */
class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false;
        double res = log(n) / log(4.0);
        return (res - int(res)) < 1e-6;
    }
};
