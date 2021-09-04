/**
 * 283 / 283 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 13.4 MB 
 */
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n + 1);
        dp[1] = cost[0];
        for (int i = 2; i <= n; ++ i) {
            dp[i] = min(dp[i - 1], dp[i - 2]) + cost[i - 1];
        }
        return min(dp[n], dp[n - 1]);
    } 
};

/**
 * 283 / 283 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 13.3 MB 
 */
class Solution2 {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int a = 0, b = cost[0];
        for (int i = 2; i <= n; ++ i) {
            int tmp = b;
            b = min(a, b) + cost[i - 1];
            a = tmp;
        }
        return min(a, b);
    } 
};
