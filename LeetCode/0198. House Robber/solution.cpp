/**
 * 68 / 68 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 7.5 MB 
 */
class Solution {
public:
    int rob(vector<int>& nums) {
        int len = nums.size();
        if (len == 0) return 0;

        vector<int> dp(nums.size() + 1);
        dp[1] = nums[0];
        for (int i = 2; i <= len; ++ i) {
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i - 1]);
        }
        return dp.back();
    }
};
