/**
 * 74 / 74 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 7.5 MB 
 */
class Solution {
public:
    int robRange(vector<int>& nums, int start, int end) {
        int last = 0, curr = 0;
        for (int i = start; i <= end; ++ i) {
            int tmp = curr;
            curr = max(last + nums[i], curr);
            last = tmp;
        }
        return curr;
    }
    int rob(vector<int>& nums) {
        int len = nums.size();
        if (len == 0) return 0;
        if (len == 1) return nums[0];
        if (len == 2) return max(nums[0], nums[1]);
        return max(robRange(nums, 0, len - 2), robRange(nums, 1, len - 1));
    }
};
