/**
 * 43 / 43 test cases passed.
 * Runtime: 60 ms
 * Memory Usage: 26.7 MB 
 */
class Solution {
private:
    static const size_t MOD = 1e9 + 7;
public:
    int countVowelPermutation(int n) {
        // a e i o u
        // 0 1 2 3 4
        vector<vector<size_t>> dp(n + 1, vector<size_t>(5));
        for (int i = 0; i < 5; ++ i) {
            dp[1][i] = 1;
        }
        for (int i = 2; i <= n; ++ i) {
            dp[i][0] = dp[i - 1][1]; // a
            dp[i][1] = (dp[i - 1][0] + dp[i - 1][2]) % MOD; // e
            dp[i][2] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][3] + dp[i - 1][4]) % MOD;// i
            dp[i][3] = (dp[i - 1][2] + dp[i - 1][4]) % MOD;// o
            dp[i][4] = dp[i - 1][0];// u
        }
        return accumulate(dp[n].begin(), dp[n].end(), 0LL) % MOD;
    }
};
