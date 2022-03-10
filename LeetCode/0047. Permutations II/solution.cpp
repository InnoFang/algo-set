/**
 * 33 / 33 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 8.3 MB 
 */
class Solution {
public:
    void dfs(vector<int> &nums, vector<bool> &vis, vector<vector<int>> &ans,  vector<int> &path) {
        if (path.size() == nums.size()) {
            ans.emplace_back(path);
            return;
        }

        for (int i = 0; i < nums.size(); ++ i) {
            if (vis[i] || (i != 0 && nums[i] == nums[i - 1] && !vis[i - 1])) {
                continue;
            }
            vis[i] = true;
            path.emplace_back(nums[i]);
            dfs(nums, vis, ans, path);
            path.pop_back();
            vis[i] = false;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        vector<int> path;
        vector<bool> vis(n);
        sort(nums.begin(), nums.end());
        dfs(nums, vis, ans, path);
        return ans;
    }
};
