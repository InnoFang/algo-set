/**
 * 74 / 74 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 12.7 MB 
 */
class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> dp(nums1.size() + 1, vector<int>(nums2.size() + 1));
        for (int i = 1; i <= nums1.size(); ++ i) {
            for (int j = 1; j <= nums2.size(); ++ j) {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                if (nums1[i - 1] == nums2[j - 1]) {
                    dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
                }
            }
        }
        return dp.back().back();
    }
};
