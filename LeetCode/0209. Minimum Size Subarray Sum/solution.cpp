/**
 * 19 / 19 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 10.2 MB 
 */
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = nums.size() + 1, sum = 0, l = 0;
        for (int r = 0; r < nums.size(); ++ r) {
            sum += nums[r];
            while (sum >= target) {
                ans = min(ans, r - l + 1);
                sum -= nums[l];
                ++ l;
            }
        }
        return ans == nums.size() + 1 ? 0 : ans;
    }
};
