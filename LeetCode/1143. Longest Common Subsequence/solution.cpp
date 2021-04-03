/**
 * 44 / 44 test cases passed.
 * Runtime: 24 ms
 * Memory Usage: 12.8 MB 
 */
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> dp(text1.size() + 1, vector<int>(text2.size() + 1));
        for (int i = 1; i <= text1.size(); ++ i) {
            for (int j = 1; j <= text2.size(); ++ j) {
                dp[i][j] = text1[i - 1] == text2[j - 1] ? dp[i - 1][j - 1] + 1 : max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        return dp.back().back();
    }
};
