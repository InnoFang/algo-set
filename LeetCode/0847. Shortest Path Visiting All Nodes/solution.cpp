/**
 * 49 / 49 test cases passed.
 * Runtime: 16 ms
 * Memory Usage: 9 MB 
 */
class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        int n = graph.size();

        queue<tuple<int, int, int>> que; // index, mask, distance
        vector<vector<bool>> visited(n, vector<bool>(1 << n));
        for (int i = 0; i < n; ++ i) {
            que.push({i, 1 << i, 0});
            visited[i][1 << i] = true;
        }

        while (!que.empty()) {
            auto [idx, mask, dist] = que.front();
            que.pop();

            if (mask == (1 << n) - 1) return dist;

            for (const auto& x: graph[idx]) {
                int next_mask = mask | (1 << x);
                if (!visited[x][next_mask]) {
                    que.push({x, next_mask, dist + 1});
                    visited[x][next_mask] = true;
                }
            }
        }
        return -1;
    }
};