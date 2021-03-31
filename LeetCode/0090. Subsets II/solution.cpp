/**
 * 19 / 19 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 7.3 MB 
 */
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> path; 
        sort(nums.begin(), nums.end());
        dfs(0, nums, ans, path);
        return ans;
    }

    void dfs(int start, vector<int>& nums, vector<vector<int>>& ans, vector<int>& path) {
        ans.push_back(vector<int>(path));
        auto top = ans.back();
        for (int i = start; i < nums.size(); ++ i) {
            if (i > start && nums[i] == nums[i - 1]) 
                continue;
            top.push_back(nums[i]);
            dfs(i + 1, nums, ans, top);
            top.pop_back();
        }
    }
};
