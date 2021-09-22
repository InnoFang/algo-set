/**
 * 223 / 223 test cases passed.
 * Runtime: 120 ms
 * Memory Usage: 12.9 MB 
 */
class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int sz = nums.size();
        vector<int> dp(sz, 1); 
        vector<int> count(sz, 1);
        int longest = 1;
        for (int i = 1; i < sz; ++ i) {
            for (int j = 0; j < i; ++ j) { 
                if (nums[i] > nums[j]) {
                    if (dp[j] + 1 > dp[i]) {
                        dp[i] = dp[j] + 1;
                        count[i] = count[j];
                    } else if (dp[j] + 1 == dp[i]) {
                        count[i] += count[j];
                    }
                }
            }
            longest = max(longest, dp[i]);
        }
        int ans = 0;
        for (int i = 0; i < sz; ++ i) {
            if (dp[i] == longest) {
                ans += count[i];
            }
        }
        return ans;
    }
};
