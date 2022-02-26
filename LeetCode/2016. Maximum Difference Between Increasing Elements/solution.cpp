/**
 * 54 / 54 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 8 MB 
 */
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans = -1, n = nums.size(), minimum = nums[0];
        for (int i = 1; i < n; ++ i) {
            if (nums[i] > minimum) ans = max(ans, nums[i] - minimum);
            minimum = min(minimum, nums[i]);
        }
        return ans;
    }
};
