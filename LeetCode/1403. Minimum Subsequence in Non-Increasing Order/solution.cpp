/**
 * 103 / 103 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 10.4 MB 
 */
class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        int total = accumulate(nums.begin(), nums.end(), 0);
        int sum = 0;
        vector<int> ans;
        for (auto &num : nums) {
            sum += num;
            ans.emplace_back(num);
            if (sum > total - sum) {
                return ans;
            }
        }
        return ans;
    }
};
