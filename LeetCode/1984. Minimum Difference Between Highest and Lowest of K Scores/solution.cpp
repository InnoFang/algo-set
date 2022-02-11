/**
 * 118 / 118 test cases passed.
 * Runtime: 16 ms
 * Memory Usage: 13.3 MB 
 */
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int lowest = nums[0], highest = nums[k - 1];
        int ans = highest - lowest;
        for (int i = k; i < nums.size(); ++ i) {
            highest = nums[i];
            lowest = nums[i - k + 1];
            ans = min(ans, highest - lowest);
        }
        return ans;
    }
};
