/**
 * 76 / 76 test cases passed.
 * Runtime: 376 ms
 * Memory Usage: 114.2 MB 
 */
class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        unordered_map<int, vector<int>> node2edges;
        int edges_count = connections.size();
        for (int i = 0; i < edges_count; ++ i) {
            node2edges[connections[i][0]].push_back(i);
            node2edges[connections[i][1]].push_back(i);
        }
        vector<bool> used(edges_count);
        queue<int> que;
        que.emplace(0);
        int ans = 0;
        while (!que.empty()) {
            int node = que.front(); que.pop();
            for (auto &edge_id : node2edges[node]) {
                if (used[edge_id]) continue;
                used[edge_id] = true;

                int src = connections[edge_id][0];
                int tar = connections[edge_id][1];
                if (node == src) ++ ans;
                int next = node == src ? tar : src;
                que.emplace(next);
            }
        }
        return ans;
    }
};
