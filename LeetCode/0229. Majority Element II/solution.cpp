/**
 * 82 / 82 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 15.4 MB 
 */
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> counts;
        for (auto &num : nums) {
            counts[num] += 1;
        }
        int limit = nums.size() / 3;
        vector<int> ans;
        for (auto &[num, cnt]: counts) {
            if (cnt > limit) {
                ans.push_back(num);
            }
        }
        return ans;
    }
};
