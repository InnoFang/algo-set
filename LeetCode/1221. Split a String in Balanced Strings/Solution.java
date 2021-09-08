/**
 * 40 / 40 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 35.9 MB 
 */
class Solution {
    public int balancedStringSplit(String s) {
        int ans = 0, total = 0;
        for (char c: s.toCharArray()) {
            total += (c == 'R') ? 1 : -1;
            ans += (total == 0) ? 1 : 0;
        }
        return ans;
    }
}
