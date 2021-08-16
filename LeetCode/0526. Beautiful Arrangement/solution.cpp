/**
 * 15 / 15 test cases passed.
 * Runtime: 88 ms
 * Memory Usage: 5.9 MB 
 */
class Solution {
public:
    vector<bool> used;
    int countArrangement(int n) {
        used.assign(n + 1, false);
        return dfs(n, 1);
    }
    int dfs(int n, int idx) {
        if (idx > n) return 1;

        int ret = 0;
        for (int num = 1; num <= n; ++ num) {
            if (!used[num] && (idx % num == 0 || num % idx == 0)) {
                used[num] = true;
                ret += dfs(n, idx + 1);
                used[num] = false;
            }
        }
        return ret;
    }
};
