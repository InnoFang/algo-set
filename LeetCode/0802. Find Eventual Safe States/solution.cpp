/**
 * 112 / 112 test cases passed.
 * Runtime: 176 ms
 * Memory Usage: 60.3 MB 
 */
class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        // adjacency list of reverse graph
        vector<vector<int>> reverse_graph(n); 
        vector<int> in_degree(n, 0);

        for (int i = 0; i < n; ++ i) {
            for (const auto& x: graph[i]) {
                reverse_graph[x].push_back(i);
            }
            in_degree[i] = graph[i].size();
        }

        // topological sort
        queue<int> que;
        for (int i = 0; i < n; ++ i) {
            if (!in_degree[i]) {
                que.push(i);
            }
        }
        
        while (!que.empty()) {
            int curr = que.front();
            que.pop();
            for (const auto& x: reverse_graph[curr]) {
                in_degree[x] --;
                if (!in_degree[x]) {
                    que.push(x);
                }
            }
        }

        vector<int> ans;
        for (int i = 0; i < n; ++ i) {
            if (!in_degree[i]) {
                ans.push_back(i);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
