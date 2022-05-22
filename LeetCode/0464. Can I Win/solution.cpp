/**
 * 57 / 57 test cases passed.
 * Runtime: 716 ms
 * Memory Usage: 87.4 MB 
 */
class Solution {
public:
    unordered_map<int, bool> memo;
    bool canIWin(int maxChoosableInteger, int desiredTotal) {
        if ((1 + maxChoosableInteger) * maxChoosableInteger * 0.5 < desiredTotal) return false;
        return dfs(0, 0, maxChoosableInteger, desiredTotal);
    }

    bool dfs(int used, int current, int maxChoosableInteger, int desiredTotal) {
        if (!memo.count(used)) {
            bool res = false;
            for (int i = 0; i < maxChoosableInteger; ++ i) {
                if (((used >> i) & 1) == 0) {
                    if (i + 1 + current >= desiredTotal) {
                        res = true;
                        break;
                    }
                    if (!dfs(used | (1 << i), current + i + 1, maxChoosableInteger, desiredTotal)) {
                        res = true;
                        break;
                    }
                }
            }
            memo[used] = res;
        }
        return memo[used];
    }
};
