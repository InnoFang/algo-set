/**
 * 94 / 94 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 9.1 MB 
 */
class Solution {
public:
    const int MOD = 1e9 + 7;
    int m, n, maxMove;
    vector<vector<vector<int>>> memo;
    vector<vector<int>> direct = {{1, 0}, {0, 1}, {0, -1}, {-1, 0}};
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        this->m = m;
        this->n = n;
        this->maxMove = maxMove;
        this->memo.assign(m, vector<vector<int>>(n, vector<int>(maxMove + 1, -1)));
        return dfs(startRow, startColumn, maxMove);
    }

    int dfs(int x, int y, int max) {
        if (x < 0 || x >= this->m || y < 0 || y >= this->n) return 1;
        if (max == 0) return 0;
        if (memo[x][y][max] != -1) return memo[x][y][max];
        int ans = 0;
        for (auto& d: direct) {
            int newX = x + d[0], newY = y + d[1];
            ans += dfs(newX, newY, max - 1);
            ans %= MOD;
        }
        memo[x][y][max] = ans;
        return ans;
    }
};
