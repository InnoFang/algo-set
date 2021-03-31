/**
 * 10 / 10 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 6.9 MB 
 */
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> path;
        dfs(0, nums, ans, path);
        return ans;
    }
    void dfs(int start, vector<int>& nums, vector<vector<int>>& ans, vector<int>& path) {
        ans.push_back(vector<int>(path));
        for (int i = start; i < nums.size(); ++ i) {
            path.push_back(nums[i]);
            dfs(i + 1, nums, ans, path);
            path.pop_back();
        }
    }
};
