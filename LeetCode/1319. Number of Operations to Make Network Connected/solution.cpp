/**
 * 36 / 36 test cases passed.
 * Runtime: 128 ms
 * Memory Usage: 50.4 MB 
 */
class Solution {
public:
    void dfs(vector<vector<int>> &edges, vector<bool> &used, int u) {
        used[u] = true;
        for (int v : edges[u]) {
            if (!used[v]) {
                dfs(edges, used, v);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if (n - 1 > connections.size()) return -1;
       vector<bool> used(n);
       vector<vector<int>> edges(n);
       for (auto &conn : connections) {
           edges[conn[0]].push_back(conn[1]);
           edges[conn[1]].push_back(conn[0]);
        }

        int ans = 0;
        for (int i = 0; i < n; ++ i) {
            if (!used[i]) {
                dfs(edges, used, i);
                ++ ans;
            } 
        }
        return ans - 1;
    }
};
