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
