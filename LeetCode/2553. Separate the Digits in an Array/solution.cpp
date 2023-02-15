/**
 * Runtime: 4 ms
 * Memory Usage: 9.7 MB 
 */
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for_each(nums.rbegin(), nums.rend(), [&](int num) {
            while (num > 0) {
                ans.push_back(num % 10);
                num /= 10;
            }
        });
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
