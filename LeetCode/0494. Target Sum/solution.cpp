/**
 * 138 / 138 test cases passed.
 * Runtime: 1900 ms
 * Memory Usage: 8.8 MB 
 */
class Solution {
public:
    int dfs(vector<int>& nums, int cur, int sum, int target) {
        if (cur == nums.size()) {
            return sum == target;
        }
        int left = dfs(nums, cur + 1, sum + nums[cur], target);
        int right = dfs(nums, cur + 1, sum - nums[cur], target);
        return left + right;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return dfs(nums, 0, 0, target);
    }
};
