/**
 * 289 / 289 test cases passed.
 * Runtime: 92 ms
 * Memory Usage: 12.8 MB 
 */
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n = nums.size();
        if (n < 4) return ans;

        sort(nums.begin(), nums.end());
        for (int i = 0; i <= n - 4; ++ i) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            for (int j = i + 1; j <= n - 3; ++ j) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                int l = j + 1, r = n - 1;
                while (l < r) {
                    if (nums[i] + nums[j] < target - nums[l] - nums[r]) {
                        ++ l;
                    } else if (nums[i] + nums[j] > target - nums[l] - nums[r]) {
                        -- r;
                    } else {
                        ans.push_back({nums[i], nums[j], nums[l], nums[r]});
                        while (l < r && nums[l] == nums[l + 1]) ++ l;
                        while (l < r && nums[r] == nums[r - 1]) -- r;
                        ++ l;
                        -- r;
                    } 
                }
            }
        }
        return ans;
    }
};
