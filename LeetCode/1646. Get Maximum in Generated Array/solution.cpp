/**
 * 101 / 101 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6.3 MB 
 */
class Solution {
public:
    int getMaximumGenerated(int n) {
        if (n <= 1) return n;
        vector<int> dp(n + 1);
        dp[1] = 1;
        int ans = 1;
        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i >> 1] + (i & 1) * dp[(i >> 1) + 1];
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};
