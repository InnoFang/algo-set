/**
 * 36 / 36 test cases passed.
 * Status: Accepted
 * Runtime: 8 ms
 */
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int start = 0, ans = 0;
        for (int i = 0; i < nums.size(); ++ i) {
            if (i > 0 && nums[i] <= nums[i-1]) {
                start = i;
            }
            ans = max(ans, i - start + 1);
        }
        return ans;
    }
}; 

