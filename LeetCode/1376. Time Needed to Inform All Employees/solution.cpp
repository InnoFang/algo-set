/**
 * 39 / 39 test cases passed.
 * Runtime: 296 ms
 * Memory Usage: 123.9 MB 
 */
class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<vector<int>> edges(n);
        for (int i = 0; i < n; ++ i) {
            int id = manager[i];
            if (id == -1) continue;
            edges[id].push_back(i);
        }
        queue<pair<int, int>> que;
        que.emplace(headID, informTime[headID]);
        int ans = 0;
        while (!que.empty()) {
            int level = que.size();
            for (int i = 0; i < level; ++ i) {
                auto [pid, time] = que.front(); que.pop();
                ans = max(ans, time);
                for (auto id : edges[pid]) {
                    que.emplace(id, time + informTime[id]);
                }
            }
        }
        return ans;
    }
};
