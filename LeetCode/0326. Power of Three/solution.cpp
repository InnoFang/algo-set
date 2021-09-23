/**
 * 21038 / 21038 test cases passed.
 * Runtime: 16 ms
 * Memory Usage: 6.1 MB 
 */
class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) return false;
        double x = log10(n) / log10(3); 
        return (x - int(x)) < 1e-10;
    }
};
