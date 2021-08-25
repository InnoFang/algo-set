/**
 * 30 / 30 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 10.4 MB 
 */
class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> curr { 0 };
        dfs(graph, 0, ans, curr);
        return ans;
    }

    void dfs(vector<vector<int>>& graph, int idx, vector<vector<int>>& path, vector<int>& curr) {
        if (idx + 1 == graph.size()) {
            path.emplace_back(curr);
            return;
        }
        for (auto& next: graph[idx]) {
            curr.emplace_back(next);
            dfs(graph, next, path, curr);
            curr.pop_back();
        }
    }
};

/**
 * 30 / 30 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 10.4 MB 
 */
class Solution2 {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<vector<int>> ans;
        vector<int> curr { 0 };
        curr.reserve(n);
        dfs(graph, 0, n - 1, ans, curr);
        return ans;
    }

    void dfs(vector<vector<int>>& graph, int idx, int last, vector<vector<int>>& path, vector<int>& curr) {
        if (idx == last) {
            path.emplace_back(curr);
            return;
        }
        for (auto& next: graph[idx]) {
            curr.emplace_back(next);
            dfs(graph, next, last, path, curr);
            curr.pop_back();
        }
    }
};
