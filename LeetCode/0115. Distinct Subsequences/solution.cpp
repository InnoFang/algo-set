/**
 * 62 / 62 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 7.2 MB 
 */
class Solution {
public:
    int numDistinct(string s, string t) {
        vector<vector<long>> dp(s.size() + 1, vector<long>(t.size() + 1));
        for (int i = 0; i <= s.size(); ++ i) dp[i][0] = 1;
        for (int i = 1; i <= s.size(); ++ i) {
            for (int j = 1; j <= t.size(); ++ j) {
                dp[i][j] = (s[i - 1] == t[j - 1]) ? dp[i - 1][j - 1] + dp[i - 1][j]
                                                    : dp[i - 1][j];
            }
        }
        return dp[s.size()][t.size()];
    }
};
