/**
 * Runtime: 0 ms
 * Memory Usage: 8.2 MB 
 */
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); ++ i) {
            ans.insert(ans.begin() + index[i], nums[i]);
        }
        return ans;
    }
};
