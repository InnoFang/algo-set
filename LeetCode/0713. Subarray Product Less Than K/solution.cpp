/**
 * 97 / 97 test cases passed.
 * Runtime: 48 ms
 * Memory Usage: 59.9 MB 
 */
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0;
        int ans = 0, l = 0, prod = 1;
        for (int r = 0; r < nums.size(); ++ r) {
            prod *= nums[r];
            while (prod >= k) {
                prod /= nums[l];
                ++ l;
            }
            ans += r - l + 1;
        }
        return ans;
    }
};