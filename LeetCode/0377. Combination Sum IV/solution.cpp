/**
 * 15 / 15 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6.8 MB 
 */
class Solution {
public:
    unordered_map<int, int> memo;
    int dfs(vector<int>& nums, int target) {
        if (target == 0) return 1;
        if (memo.count(target)) return memo[target];
        
        int res = 0;
        for (int i = 0; i < nums.size(); ++ i) {
            if (nums[i] <= target) {
                res += dfs(nums, target - nums[i]);
            }
        }
        memo[target] = res;
        return res;
    }
    int combinationSum4(vector<int>& nums, int target) {
        return dfs(nums, target);
    }
};

/**
 * 15 / 15 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6.4 MB 
 */
class Solution2 {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target + 1);
        dp[0] = 1;
        for (int i = 1; i <= target; ++ i) {
            for (auto& num: nums) {
                if (i >= num) {
                    dp[i] = (0LL + dp[i] + dp[i - num]) % INT_MAX;
                }
            }
        }
        return dp[target];
    }
};
