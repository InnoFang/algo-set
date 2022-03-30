/**
 * 90 / 90 test cases passed.
 * Runtime: 148 ms
 * Memory Usage: 51.4 MB 
 */
class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        unordered_map<int, vector<int>> red_graph;
        unordered_map<int, vector<int>> blue_graph;
        for (auto edge: redEdges) {
            red_graph[edge[0]].push_back(edge[1]);
        }
        for (auto edge: blueEdges) {
            blue_graph[edge[0]].push_back(edge[1]);
        }

        vector<vector<vector<bool>>> used(n, vector<vector<bool>>(n, vector<bool>(2, false)));
        queue<pair<int, int>> que; // <node, color>
        que.emplace(0, 1); // red
        que.emplace(0, 0); // blue
        int steps = 0;
        vector<int> ans(n, INT_MAX);
        while (!que.empty()) {
            int level = que.size();
            ++ steps;
            for (int i = 0; i < level; ++ i) {
                auto [curr, color] = que.front(); que.pop();
                if (color) { // red to blue
                    for (auto &next : blue_graph[curr]) {
                        if (!used[curr][next][0]) {
                            used[curr][next][0] = true;
                            ans[next] = min(ans[next], steps);
                            que.emplace(next, 0);
                        }
                    }
                } else { // blue to red
                    for (auto &next : red_graph[curr]) {
                        if (!used[curr][next][1]) {
                            used[curr][next][1] = true;
                            ans[next] = min(ans[next], steps);
                            que.emplace(next, 1);
                        }
                    }
                }
            }
        }
        ans[0] = 0;
        for (int i = 0; i < n; ++ i) {
            if (ans[i] == INT_MAX) {
                ans[i] = -1;
            }
        }
        return ans;
    }
};
