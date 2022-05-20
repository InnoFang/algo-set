/**
 * 30 / 30 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 10.6 MB 
 */
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size(), mid = nums[n / 2], ans = 0;
        for (int i = 0; i < n; ++ i) {
            ans += abs(nums[i] - mid);
        }
        return ans;
    }
};
