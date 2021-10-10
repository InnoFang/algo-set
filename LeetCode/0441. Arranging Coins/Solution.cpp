/**
 * 1335 / 1335 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.9 MB 
 */
class Solution {
public:
    int arrangeCoins(int n) {
        return static_cast<int>((-1 + sqrt(1 + 8.0 * n)) / 2);
    }
};
