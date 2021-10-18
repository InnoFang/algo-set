/**
 * 149 / 149 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 35.1 MB 
 */
class Solution {
    public int findComplement(int num) {
        int mask = num;
        mask |= mask >> 1;
        mask |= mask >> 2;
        mask |= mask >> 4;
        mask |= mask >> 8;
        mask |= mask >> 16;
        return mask ^ num;
    }
}

/**
 * 149 / 149 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 35.2 MB 
 */
class Solution2 {
    public int findComplement(int num) {
        int mask = ~0;
        while ((mask & num) != 0) mask <<= 1;
        return (~mask) & (~num);
    }
}
