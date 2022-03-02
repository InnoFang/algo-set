/**
 * 117 / 117 test cases passed.
 * Runtime: 168 ms
 * Memory Usage: 11.7 MB 
 */
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return false;
        int sum = 0, maxn = 0;
        for (int i = 0; i < n; ++ i) {
            sum += nums[i];
            maxn = max(maxn, nums[i]);
        }
        int target = sum >> 1;
        if (sum & 1 || maxn > target) return false;
        
        vector<vector<bool>> dp(n, vector<bool>(target + 1));
        for (int i = 0; i < n; ++ i) dp[i][0] = true;
        dp[0][nums[0]] = true;
        for (int i = 1; i < n; ++ i) {
            int num = nums[i];
            for (int j = 0; j <= target; ++ j) {
                if (j >= num) {
                    dp[i][j] = dp[i - 1][j] || dp[i - 1][j - num];
                } else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        return dp[n - 1][target];
    }
};
