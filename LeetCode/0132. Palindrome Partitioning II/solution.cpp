/**
 * 29 / 29 test cases passed.
 * Runtime: 52 ms
 * Memory Usage: 19.3 MB 
 */
class Solution {
public:
    int minCut(string s) {
        int n = s.size();
        vector<vector<int>> dp(n, vector<int>(n, 1));
        for (int i = n - 1; i >= 0; -- i) {
            for (int j = i + 1; j < n; ++ j) {
                dp[i][j] = s[i] == s[j] && dp[i + 1][j - 1];
            }
        }
        
        vector<int> f(n);
        for (int i = 1; i < n; ++ i) {
            if (dp[0][i]) f[i] = 0;
            else {
                f[i] = f[i - 1] + 1;
                for (int j = 1; j < i; ++ j) {
                    if (dp[j][i]) {
                        f[i] = min(f[i], f[j - 1] + 1);
                    }
                }
            }
        }
        return f[n - 1];
    }
};
