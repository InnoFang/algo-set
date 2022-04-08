/**
 * 37 / 37 test cases passed.
 * Runtime: 52 ms
 * Memory Usage: 19.3 MB 
 */
class Solution {
public:
    int direct[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    using pii = pair<int, int>;
    int maxDistance(vector<vector<int>>& grid) {
        int n = grid.size();
        queue<pii> que;
        for (int i = 0; i < n; ++ i) {
            for (int j = 0; j < n; ++ j) {
                if (grid[i][j]) que.emplace(i, j);
            }
        }
        if (que.size() == 0 || que.size() == n * n) return -1;

        int x, y;
        while (!que.empty()) {
            auto temp = que.front(); que.pop();
            x = temp.first, y = temp.second;
            for (auto &d : direct) {
                int xx = x + d[0];
                int yy = y + d[1];
                if (xx < 0 || xx >= n || yy < 0 || yy >= n) continue;
                if (grid[xx][yy]) continue;
                grid[xx][yy] = grid[x][y] + 1;
                que.emplace(xx, yy);
            }
        }
        return grid[x][y] - 1;
    }
};
