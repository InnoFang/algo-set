/**
 * 59 / 59 test cases passed.
 * Runtime: 1828 ms
 * Memory Usage: 385.7 MB 
 */
class Solution {
public:
    const int mod = 1e9 + 7;
    vector<vector<vector<int>>> memo;
    int checkRecord(int n) {
        memo.assign(n + 1, vector<vector<int>>(2, vector<int>(3, -1)));
        return dfs(n, 0, 0);
    }

    int dfs(int n, int a, int l) {
        if (a >= 2) return 0;
        if (l >= 3) return 0;
        if (n == 0) return 1;
        if (memo[n][a][l] != -1) return memo[n][a][l];

        int ans = dfs(n - 1, a, 0) % mod; // P
        ans = (ans + dfs(n - 1, a + 1, 0)) % mod; // A
        ans = (ans + dfs(n - 1, a, l + 1)) % mod; // L
        memo[n][a][l] = ans;
        return ans;
    }
};

/**
 * 59 / 59 test cases passed.
 * Runtime: 1448 ms
 * Memory Usage: 437.7 MB 
 */
class Solution2 {
public:
    const int mod = 1e9 + 7;
    int checkRecord(int n) {
        vector<vector<vector<long>>> dp(n, vector<vector<long>>(2, vector<long>(3)));
        dp[0][0][0] = 1;
        dp[0][1][0] = 1;
        dp[0][0][1] = 1;
        for (int i = 1; i < n; ++ i) {
            // P
            dp[i][0][0] = (dp[i - 1][0][0] + dp[i - 1][0][1] + dp[i - 1][0][2]) % mod;
            // A
            dp[i][1][0] = (dp[i][1][0] 
                         + dp[i][0][0] + dp[i][0][1] + dp[i][1][2]
                         + dp[i - 1][1][0] + dp[i - 1][1][1] + dp[i - 1][1][2]) % mod;
            // L
            dp[i][0][1] = dp[i - 1][0][0];
            dp[i][0][2] = dp[i - 1][0][1];
            dp[i][1][1] = dp[i - 1][1][0];
            dp[i][1][2] = dp[i - 1][1][1];
        }

        int ans = 0;
        for (int i = 0; i < 2; ++ i) {
            for (int j = 0; j < 3; ++ j) {
                ans = (ans + dp[n - 1][i][j]) % mod;
            }
        }
        return (int) ans;
    }
};
