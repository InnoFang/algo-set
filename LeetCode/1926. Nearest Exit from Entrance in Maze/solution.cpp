/**
 * 194 / 194 test cases passed.
 * Runtime: 108 ms
 * Memory Usage: 32.2 MB 
 */
class Solution {
public:
    int direct[4][2] = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
    using pii = pair<int, int>;
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int m = maze.size(), n = maze[0].size();
        vector<vector<int>> used(m, vector<int>(n));
        queue<pii> que;
        que.emplace(entrance[0], entrance[1]);
        used[entrance[0]][entrance[1]] = true;
        int path = 0;
        while (!que.empty()) {
            int level = que.size();
            for (int i = 0; i < level; ++ i) {
                auto [x, y] = que.front(); que.pop();
                for (auto &d : direct) {
                    int xx = x + d[0];
                    int yy = y + d[1];
                    if (xx < 0 || xx >= m || yy < 0 || yy >= n) continue;
                    if (maze[xx][yy] == '+' || used[xx][yy]) continue;
                    if (xx == 0 || xx == m - 1 || yy == 0 || yy == n - 1) return path + 1;
                    used[xx][yy] = true;
                    que.emplace(xx, yy);
                }
            }
            ++ path;
        }
        return -1;
    }
};
