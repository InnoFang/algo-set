/**
 * 68 / 68 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 10.1 MB 
 */
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> visit(n);
        queue<int> que;
        for (int i : rooms[0]) {
            que.emplace(i);
        }
        while (!que.empty()) {
            auto sr = que.front(); que.pop();
            visit[sr] = true;
            for (int sc: rooms[sr]) {
                if (!visit[sc]) 
                    que.emplace(sc);
            }
        }
        for (int i = 1; i < n; ++ i) {
            if (!visit[i]) return false;
        }
        return true;
    }
};
