/**
 * 59 / 59 test cases passed.
 * Runtime: 1828 ms
 * Memory Usage: 385.7 MB 
 */
class Solution {
public:
    const int mod = 1e9 + 7;
    vector<vector<vector<int>>> memo;
    int checkRecord(int n) {
        memo.assign(n + 1, vector<vector<int>>(2, vector<int>(3, -1)));
        return dfs(n, 0, 0);
    }

    int dfs(int n, int a, int l) {
        if (a >= 2) return 0;
        if (l >= 3) return 0;
        if (n == 0) return 1;
        if (memo[n][a][l] != -1) return memo[n][a][l];

        int ans = dfs(n - 1, a, 0) % mod; // P
        ans = (ans + dfs(n - 1, a + 1, 0)) % mod; // A
        ans = (ans + dfs(n - 1, a, l + 1)) % mod; // L
        memo[n][a][l] = ans;
        return ans;
    }
};
