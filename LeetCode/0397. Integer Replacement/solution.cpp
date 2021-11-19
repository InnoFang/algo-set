/**
 * 47 / 47 test cases passed.
 * Runtime: 10 ms
 * Memory Usage: 0 MB 
 */
class Solution {
public:
    unordered_map<long, int> memo;
    int integerReplacement(int n) {
        return dfs(n);
    }
    int dfs(long n) {
        if (n == 1) return 0;
        if (memo.count(n)) return memo[n];
        int ans = 0;
        if (n & 1) ans = min(dfs(n + 1), dfs(n - 1)) + 1;
        else ans = dfs(n >> 1) + 1;
        memo[n] = ans;
        return ans;
    }
};
