/**
 * 588 / 588 test cases passed.
 * Runtime: 220 ms
 * Memory Usage: 9 MB 
 */
class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;
        for (int i = 1; i <= n; ++ i) {
            int x = i * i;
            for (int j = x; j <= n; ++ j) {
                dp[j] = min(dp[j], dp[j - x] + 1);
            }
        }
        return dp[n];
    }
};
