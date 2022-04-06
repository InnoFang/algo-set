/**
 * 71 / 71 test cases passed.
 * Runtime: 148 ms
 * Memory Usage: 51.2 MB 
 */
class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if (n == 1) return {0};
        vector<vector<int>> graph(n, vector<int>());
        vector<int> outd(n);
        for (auto &edge : edges) {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
            outd[edge[0]] ++;
            outd[edge[1]] ++;
        }
        queue<int> que;
        for (int i = 0; i < n; ++ i)  {
            if (graph[i].size() == 1) {
                que.emplace(i);
            }
        }
        vector<int> ans;
        while (que.size()) {
            ans.clear();
            int layer = que.size();
            for (int i = 0; i < layer; ++ i) {
                int x = que.front(); que.pop();
                ans.push_back(x);
                for (auto &y : graph[x]) {
                    outd[y]--;
                    if (outd[y] == 1) {
                        que.emplace(y);
                    }
                }
            }
        }
        return ans;
    }
};
