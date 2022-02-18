/**
 * 49 / 49 test cases passed.
 * Runtime: 56 ms
 * Memory Usage: 17.6 MB 
 */
class Solution {
public:
    int direct[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    using pii = pair<int, int>;
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        int m = grid.size(), n = grid[0].size();
        for (int i = 0; i < m; ++ i) {
            for (int j = 0; j < n; ++ j) {
                if (grid[i][j] == '1') {
                    ++ ans;
                    queue<pii> que;
                    que.emplace(i, j);
                    grid[i][j] = '0';
                    while (!que.empty()) {
                        auto [x, y] = que.front(); que.pop();
                        for (auto &d : direct) {
                            int xx = x + d[0];
                            int yy = y + d[1];
                            if (xx < 0 || xx >= m || yy < 0 || yy >= n) continue;
                            if (grid[xx][yy] == '0') continue;

                            que.emplace(xx, yy);
                            grid[xx][yy] = '0';
                        }
                    }
                }
            }
        }
        return ans;
    }
};

/**
 * 49 / 49 test cases passed.
 * Runtime: 32 ms
 * Memory Usage: 12.3 MB 
 */
class Solution2 {
public:
    int direct[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    vector<vector<bool>> used;
    void dfs(vector<vector<char>> &grid, int x, int y) {
       used[x][y] = true;
       for (auto &d : direct) {
           int xx = x + d[0];
           int yy = y + d[1];
           if (xx < 0 || xx >= grid.size() || yy < 0 || yy >= grid[0].size()) continue;
           if (grid[xx][yy] == '0' || used[xx][yy]) continue;
           dfs(grid, xx, yy);
       }
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        int m = grid.size(), n = grid[0].size();
        used.resize(m, vector<bool>(n));
        for (int i = 0; i < grid.size(); ++ i) {
            for (int j = 0; j < grid[0].size(); ++ j) {
                if (grid[i][j] == '1' && !used[i][j]) {
                    ++ ans;
                    dfs(grid, i, j);
                }
            }
        }
        return ans;
    }
};
