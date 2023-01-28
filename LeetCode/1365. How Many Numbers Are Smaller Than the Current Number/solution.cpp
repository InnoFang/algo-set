/**
 * Runtime: 12 ms
 * Memory Usage: 10.8 MB 
 */
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int, vector<int>> rec;
        for (int i = 0; i < nums.size(); ++ i) {
            rec[nums[i]].push_back(i);
        }
        vector<int> ans(nums.size());
        int sz = 0;
        for (auto &[_, indices]: rec) {
            for (auto &idx: indices) {
                ans[idx] = sz;
            }
            sz += indices.size();
        }
        return ans;
    }
};
