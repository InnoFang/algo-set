/**
 * 149 / 149 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.7 MB 
 */
class Solution {
public:
    int hammingDistance(int x, int y) {
        return __builtin_popcount(x ^ y);
    }
};
