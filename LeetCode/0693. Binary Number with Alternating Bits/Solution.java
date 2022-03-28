/**
 * 204 / 204 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 38.4 MB 
 */
class Solution {
    public boolean hasAlternatingBits(int n) {
        int x = n ^ (n >> 1);
        return (x & (x + 1)) == 0;
    }
}
