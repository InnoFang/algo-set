/**
 * 13 / 13 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 34.9 MB 
 */
class Solution {
    public int getSum(int a, int b) {
        return a == 0 ? b : getSum((a & b) << 1, a ^ b);
    }
}
