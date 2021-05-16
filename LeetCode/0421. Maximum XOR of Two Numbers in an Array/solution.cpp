/**
 * 39 / 39 test cases passed.
 * Runtime: 144 ms
 * Memory Usage: 14.8 MB 
 */
class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        int ans = 0;
        for (int i = 1; i < nums.size(); ++ i) {
            for (int j = 0; j < i; ++ j) {
                if ((long long) nums[i] + nums[j] < ans) {
                    break;
                }
                ans = max(ans, nums[i] ^ nums[j]);
            }
        }
        return ans;
    }
};
