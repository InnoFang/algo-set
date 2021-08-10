/**
 * 15 / 15 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 7.3 MB 
 */
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size(); 
        if (n < 3) return 0;
        vector<int> dp(n);
        for (int i = 1; i < n - 1; ++ i) {
            if (nums[i] - nums[i - 1] == nums[i + 1] - nums[i]) {
                dp[i + 1] += dp[i] + 1;
            }
        }
        return accumulate(dp.begin(), dp.end(), 0);
    }
};
