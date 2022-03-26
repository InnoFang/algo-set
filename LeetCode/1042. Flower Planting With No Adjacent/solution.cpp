/**
 * 51 / 51 test cases passed.
 * Runtime: 132 ms
 * Memory Usage: 48.4 MB 
 */
class Solution {
public:
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        unordered_map<int, vector<int>> graph;
        for (auto &path : paths) {
            graph[path[0] - 1].push_back(path[1] - 1);
            graph[path[1] - 1].push_back(path[0] - 1);
        }
        vector<int> ans(n);
        for (int i = 0; i < n; ++ i) {
            vector<bool> used(5);
            for (auto &adj: graph[i]) {
                used[ans[adj]] = true;
            }
            for (int j = 1; j <= 4; ++ j) {
                if (!used[j]) {
                    ans[i] = j;
                }
            }
        }
        return ans;
    }
};
