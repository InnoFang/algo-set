/**
 * 57 / 57 test cases passed.
 * Runtime: 388 ms
 * Memory Usage: 212.4 MB 
 */
class Solution {
public:
    int direct[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    using pii = pair<int, int>;
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int m = grid1.size(), n = grid1[0].size();
        int ans = 0;
        for (int i = 0; i < m; ++ i) {
            for (int j = 0; j < n; ++ j) {
                if (grid2[i][j]) {
                    queue<pii> que;
                    que.emplace(i, j);
                    grid2[i][j] = 0;
                    bool is_sub = true;
                    while (!que.empty()) {
                        auto [x, y] = que.front(); que.pop();
                        if (!grid1[x][y]) {
                            is_sub = false;
                        }
                        for (auto &d : direct) {
                            int xx = x + d[0];
                            int yy = y + d[1];
                            if (xx < 0 || xx >= m || yy < 0 || yy >= n) continue;
                            if (!grid2[xx][yy]) continue;
                            que.emplace(xx, yy);
                            grid2[xx][yy] = 0;
                        } 
                    }
                    if (is_sub) ++ ans;
                }
            }
        }
        return ans;
    }
};
