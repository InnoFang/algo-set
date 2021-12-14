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

/**
 * 53 / 53 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 9.5 MB 
 */
class Solution2 {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(nums.size());
        int idx = 0;
        for (int i = 0; i < n; ++ i) {
            ans[idx++] = nums[i];
            ans[idx++] = nums[i + n];
        }
        return ans;
    }
};
