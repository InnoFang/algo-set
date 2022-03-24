/**
 * 70 / 70 test cases passed.
 * Runtime: 152 ms
 * Memory Usage: 63.3 MB 
 */
class Solution {
public:
    bool dfs(vector<vector<int>> &graph, int idx, int color, vector<int> &person) {
        if (person[idx] != -1) return person[idx] == color;
        person[idx] = color;
        for (auto &adj : graph[idx]) {
            if (!dfs(graph, adj, !color, person)) {
                return false;
            }
        }
        return true;
    }

    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<vector<int>> graph(n + 1);
        for (auto &dislike : dislikes) {
            graph[dislike[0]].push_back(dislike[1]);
            graph[dislike[1]].push_back(dislike[0]);
        }
        vector<int> person(n + 1, -1);
        for (int i = 1; i <= n; ++ i) {
            if (person[i] == -1 && !dfs(graph, i, 0, person)) {
                return false;
            }
        }
        return true;
    }
};
