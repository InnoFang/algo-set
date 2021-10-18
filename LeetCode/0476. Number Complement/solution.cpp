/**
 * 149 / 149 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.9 MB 
 */
class Solution {
public:
    int findComplement(int num) {
        return ((1ul << (32 - __builtin_clz(num))) - 1) ^ num;
    }
};

/**
 * 149 / 149 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.8 MB 
 */
class Solution2 {
public:
    int findComplement(int num) {
        int mask = num;
        mask |= mask >> 1;
        mask |= mask >> 2;
        mask |= mask >> 4;
        mask |= mask >> 8;
        mask |= mask >> 16;
        return mask ^ num;
    }
};
