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

/**
 * 21038 / 21038 test cases passed.
 * Runtime: 32 ms
 * Memory Usage: 5.9 MB 
 */
class Solution2 {
public:
    bool isPowerOfThree(int n) {
        return n > 0 && 1162261467 % n == 0;
    }
};
