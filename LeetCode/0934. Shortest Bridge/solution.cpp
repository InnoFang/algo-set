/**
 * 96 / 96 test cases passed.
 * Runtime: 48 ms
 * Memory Usage: 18.3 MB 
 */
class Solution {
public:
    int direct[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    using pii = pair<int, int>;
    int m, n;
    queue<pii> que;
    void dfs(vector<vector<int>> &grid, int x, int y) {
        grid[x][y] = 2;
        que.emplace(x, y);
        for (auto &d : direct) {
            int xx = x + d[0];
            int yy = y + d[1];
            if (xx < 0 || xx >= m || yy < 0 || yy >= n) continue;
            if (grid[xx][yy] == 0 || grid[xx][yy] == 2) continue;
            dfs(grid, xx, yy);
        }
    }

    void bfs(vector<vector<int>> &grid, int &steps) {
        while (!que.empty()) {
            int level = que.size();
            for (int i = 0; i < level; ++ i) {
                auto [x, y] = que.front(); que.pop();
                for (auto &d : direct) {
                    int xx = x + d[0];
                    int yy = y + d[1];
                    if (xx < 0 || xx >= m || yy < 0 || yy >= n) continue;
                    if (grid[xx][yy] == 2) continue;
                    if (grid[xx][yy] == 1) return;
                    grid[xx][yy] = 2;
                    que.emplace(xx, yy);
                }
            }
            ++ steps;
        }
    }

    int shortestBridge(vector<vector<int>>& grid) {
       m = grid.size(), n = grid[0].size();
       int steps = 0;
       for (int i = 0; i < m; ++ i) {
           for (int j = 0; j < n; ++ j) {
               if (grid[i][j]) {
                   dfs(grid, i, j);
                   bfs(grid, steps);
                   return steps;
               }
           }
       }
       return -1;
    }
};
