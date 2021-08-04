/**
 * 241 / 241 test cases passed.
 * Runtime: 96 ms
 * Memory Usage: 12.6 MB 
 */
class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        if (n < 3) return ans;
        sort(nums.begin(), nums.end());
        for (int i = 2; i < n; ++ i) {
            for (int lo = 0, hi = i - 1; lo <= hi; ++ lo) {
                while (hi > lo && nums[lo] + nums[hi] > nums[i]) {
                    ans += hi - lo;
                    hi --;
                }
            }
        }
        return ans;
    }
};
