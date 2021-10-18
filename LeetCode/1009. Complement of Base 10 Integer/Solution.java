/**
 * 128 / 128 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 34.8 MB 
 */
class Solution {
    public int bitwiseComplement(int n) {
        if (n == 0) return 1;
        
        int mask = n;
        mask |= mask >> 1;
        mask |= mask >> 2;
        mask |= mask >> 4;
        mask |= mask >> 8;
        mask |= mask >> 16;
        return mask ^ n;
    }
}
