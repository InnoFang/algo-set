/**
 * 106 / 106 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 6.5 MB 
 */
class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int l1 = s1.size(), l2 = s2.size(), l3 = s3.size();
        if (l1 + l2 != l3) return false;
        vector<vector<bool>> dp(l1 + 1, vector<bool>(l2 + 1));
        dp[0][0] = true;
        for (int i = 0; i <= l1; ++ i) {
            for (int j = 0; j <= l2; ++ j) {
                int p = i + j - 1;
                if (i > 0) {
                    dp[i][j] = dp[i][j] || (dp[i - 1][j] && s1[i - 1] == s3[p]);
                }
                if (j > 0) {
                    dp[i][j] = dp[i][j] || (dp[i][j - 1] && s2[j - 1] == s3[p]);
                }
            }
        }
        return dp[l1][l2];
    }
};
