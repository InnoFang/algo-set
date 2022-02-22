/**
 * 728 / 728 test cases passed.
 * Runtime: 20 ms
 * Memory Usage: 26 MB 
 */
class Solution {
public:
    int direct[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    using pii = pair<int, int>;
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int ans = 0;
        for (int i = 0; i < m; ++ i) {
            for (int j = 0; j < n; ++ j) {
                if (grid[i][j]) {
                    queue<pii> que;
                    que.emplace(i, j);
                    grid[i][j] = 0;
                    int count = 1;
                    while (!que.empty()) {
                        auto [x, y] = que.front(); que.pop();
                        for (auto &d: direct) {
                            int xx = x + d[0];
                            int yy = y + d[1];
                            if (xx < 0 || xx >= m || yy < 0 || yy >= n) continue;
                            if (!grid[xx][yy]) continue;
                            que.emplace(xx, yy);
                            grid[xx][yy] = 0;
                            ++count;
                        }
                    }
                    ans = max(ans, count);
                }
            }
        }
        return ans;
    }
};
