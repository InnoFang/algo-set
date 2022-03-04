/**
 * 318 / 318 test cases passed.
 * Runtime: 56 ms
 * Memory Usage: 19.5 MB 
 */
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;

        int n = nums.size();
        if (n < 3) return ans;

        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; ++ i) {
            if (nums[i] > 0) return ans;
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int l = i + 1, r = n - 1;
            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                if (sum == 0) {
                    ans.push_back({nums[i], nums[l], nums[r]});
                    while (l < r && nums[l] == nums[l + 1]) ++ l;
                    while (l < r && nums[r] == nums[r - 1]) -- r;
                    ++ l;
                    -- r;
                } else if (sum > 0) -- r;
                else ++ l;
            }
        }
        return ans; 
    }
};
