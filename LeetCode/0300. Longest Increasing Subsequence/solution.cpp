/**
 * 54 / 54 test cases passed.
 * Runtime: 340 ms
 * Memory Usage: 10.4 MB 
 */
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size() + 1, 1);
        for (int i = 1; i < nums.size(); ++ i) {
            for (int j = 0; j < i; ++ j) {
                if (nums[i] > nums[j])
                    dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        return *max_element(dp.begin(), dp.end());
    }
};

/**
 * 54 / 54 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 10.2 MB 
 */
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> record { nums[0] };
        for (int i = 1; i < nums.size(); ++ i) {
            if (nums[i] > record.back()) {
                record.push_back(nums[i]);
            } else {
                auto it = lower_bound(record.begin(), record.end(), nums[i]);
                *it = nums[i];
            }
        }
        return record.size();
    }
};
