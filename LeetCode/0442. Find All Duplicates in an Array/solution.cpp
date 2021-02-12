/**
 * 28 / 28 test cases passed.
 * Status: Accepted
 * Runtime: 56 ms
 */
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        for (auto& num : nums) {
            nums[(num - 1) % nums.size()] += nums.size();
        }
        vector<int> ans;
        for (int i = 0; i < nums.size(); ++ i) {
            if (nums[i] > 2 * nums.size()) {
                ans.push_back(i + 1);
            }
        }
        return ans;
    }
};
