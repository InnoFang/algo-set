/**
 * 500 / 500 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 38.7 MB 
 */
class Solution {
    public int trailingZeroes(int n) {
        int ans = 0;
        while (n > 0) {
            ans += n / 5;
            n /= 5;
        }
        return ans;
    }
}
