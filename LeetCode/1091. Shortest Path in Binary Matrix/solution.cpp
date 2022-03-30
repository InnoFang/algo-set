/**
 * 88 / 88 test cases passed.
 * Runtime: 52 ms
 * Memory Usage: 19.1 MB 
 */
class Solution {
public:
    int direct[8][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {-1, 1}, {-1, -1}, {1, -1}};
    using pii = pair<int, int>;
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        if (grid[0][0] || grid[n - 1][n - 1]) return -1;
        if (n == 1) return 1;

        vector<vector<bool>> used(n, vector<bool>(n));
        queue<pii> que;
        que.emplace(0, 0);
        int path = 1;
        while (!que.empty()) {
            int level = que.size();
            for (int i = 0; i < level; ++ i) {
                auto [x, y] = que.front(); que.pop();
                for (auto &d : direct) {
                    int xx = x + d[0];
                    int yy = y + d[1];
                    if (xx < 0 || xx >= n || yy < 0 || yy >= n) continue;
                    if (grid[xx][yy] || used[xx][yy]) continue;
                    if (xx == n - 1 && yy == n - 1) return path + 1;
                    used[xx][yy] = true;
                    que.emplace(xx, yy); 
                }
            }
            ++ path;
        }
        return -1;
    }
};
