/**
 * 122 / 122 test cases passed.
 * Runtime: 16 ms
 * Memory Usage: 17.4 MB 
 */
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            ans += i + 1;
            ans -= nums[i];
        }
        return ans;
    }
};
