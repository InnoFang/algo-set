/**
 * 50 / 50 test cases passed.
 * Runtime: 68 ms
 * Memory Usage: 28.5 MB 
 */
class Solution {
public:
    int direct[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    using pii = pair<int, int>;
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        vector<vector<int>> ans(m, vector<int>(n));
        queue<pii> que;
        for (int i = 0; i < m; ++ i) {
            for (int j = 0; j < n; ++ j) {
                if (mat[i][j] == 0) {
                    for (auto &d : direct) {
                        int x = i + d[0];
                        int y = j + d[1];
                        if (x < 0 || x >= m || y < 0 || y >= n) continue;
                        if (!mat[x][y] || ans[x][y]) continue;
                        ans[x][y] = 1;
                        que.emplace(x, y);
                    }
                }
            }
        }
        while (!que.empty()) {
            auto [x, y] = que.front(); que.pop();
            for (auto &d : direct) {
                int xx = x + d[0];
                int yy = y + d[1];
                if (xx < 0 || xx >= m || yy < 0 || yy >= n) continue;
                if (!mat[xx][yy] || ans[xx][yy]) continue;
                ans[xx][yy] = ans[x][y] + 1;
                que.emplace(xx, yy);
            }
        }
        return ans;
    }
};
