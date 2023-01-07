/**
 * Runtime: 0 ms
 * Memory Usage: 5.8 MB 
 */
class Solution {
public:
    int minBitFlips(int start, int goal) {
        return __builtin_popcount(start ^ goal);
    }
};
