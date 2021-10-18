/**
 * 128 / 128 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.7 MB 
 */
class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0) return 1;
        return ((1ul << (32 - __builtin_clz(n))) - 1) ^ n;
    }
};
