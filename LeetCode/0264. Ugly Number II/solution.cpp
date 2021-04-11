/**
 * 596 / 596 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 5.9 MB 
 */
class Solution {
public:
    int nthUglyNumber(int n) {
        int dp[n + 1];
        dp[1] = 1;
        int p2, p3, p5 = p3 = p2 = 1;
        for (int i = 2; i <= n; ++ i) {
            int num2 = dp[p2] * 2;
            int num3 = dp[p3] * 3;
            int num5 = dp[p5] * 5;
            int next = min(num2, min(num3, num5));
            if (next == num2) p2 ++;
            if (next == num3) p3 ++;
            if (next == num5) p5 ++;
            dp[i] = next;
        }
        return dp[n];
    }
};
