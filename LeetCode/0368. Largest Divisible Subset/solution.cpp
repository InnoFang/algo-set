/**
 * 48 / 48 test cases passed.
 * Runtime: 40 ms
 * Memory Usage: 8.5 MB 
 */
class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> dp(nums.size(), 1);
        int maxVal = 0, maxSize = 1;
        for (int i = 1; i < nums.size(); ++ i) {
            for (int j = 0; j < i; ++ j) {
                if (nums[i] % nums[j] == 0) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            if (maxSize < dp[i]) {
                maxSize = dp[i];
                maxVal = nums[i];
            }
        }
        vector<int> ans;
        for (int i = nums.size() - 1; i >= 0; -- i) {
            if (dp[i] == maxSize && 
            maxSize && maxVal % nums[i] == 0) {
                ans.push_back(nums[i]);
                maxVal = nums[i];
                maxSize--;
            }
        }
        return ans;
    }
};
