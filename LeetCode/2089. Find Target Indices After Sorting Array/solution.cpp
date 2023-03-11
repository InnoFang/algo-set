/** 
 * Runtime: 0 ms
 * Memory Usage: 11.3 MB 
 */
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int lower = 0, equal = 0;
        for (auto &num: nums) {
            if (num < target) ++ lower;
            else if (num == target) ++ equal;
        }
        vector<int> ans;
        for (int i = lower; i < lower + equal; ++ i) {
            ans.push_back(i);
        }
        return ans;
    }
};
