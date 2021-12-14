/**
 * 53 / 53 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 9.6 MB 
 */
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(nums.size());
        for (int i = 0, l = 0, r = n; i < n + n; i += 2, ++ l, ++ r) {
            ans[i] = nums[l];
            ans[i + 1] = nums[r];
        }
        return ans;
    }
};
