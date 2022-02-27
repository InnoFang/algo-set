/**
 * 93 / 93 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 7.7 MB 
 */
class Solution {
public:
    string optimalDivision(vector<int>& nums) {
        int n = nums.size();
        string ans = to_string(nums[0]);
        if (n > 1) ans += "/";
        if (n > 2) ans += "(";
        for (int i = 1; i < n - 1; ++ i) {
            ans += to_string(nums[i]) + "/";
        }
        if (n > 1) ans += to_string(nums[n - 1]);
        if (n > 2) ans += ")";
        return ans;
    }
};
