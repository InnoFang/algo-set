/**
 * 601 / 601 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.8 MB 
 */
class Solution {
public:
    int hammingWeight(uint32_t n) {
        return __builtin_popcount(n);
    }
};


