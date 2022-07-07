/**
 * 269 / 269 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 39.8 MB 
 */
class Solution {
    public int numDecodings(String s) {
        int len = s.length();
        int[] dp = new int[len + 1]; 
        dp[0] = 1; 
        for (int i = 1; i <= len; i++) {
            if (s.charAt(i - 1) != '0') {
                dp[i] += dp[i - 1]; 
            }
            if (i > 1 && s.charAt(i - 2) != '0') {
                int decode = (s.charAt(i - 2) - '0') * 10 + (s.charAt(i - 1) - '0');
                if (10 <= decode && decode <= 26) {
                    dp[i] += dp[i - 2]; 
                }
            }
        }
        return dp[len];
    }
}
