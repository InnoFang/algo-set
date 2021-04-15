
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

/**
 * 68 / 68 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 7.3 MB 
 */
class Solution2 {
public:
    int rob(vector<int>& nums) {
        int len = nums.size();
        if (len == 0) return 0;
        if (len == 1) return nums[0];
        if (len == 2) return max(nums[0], nums[1]);

        int last = 0, curr = 0;
        for (auto& num: nums) {
            int tmp = curr;
            curr = max(curr, last + num);
            last = tmp;
        }
        return curr;
    }
};