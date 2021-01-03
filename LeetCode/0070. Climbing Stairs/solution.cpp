/**
 * 45 / 45 test cases passed.
 * Status: Accepted
 * Runtime: 0 ms
 */
class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;
        int p = 1, q = 2, ans;
        for (int i = 3; i <= n; ++ i) {
            ans = p + q;
            p = q;
            q = ans;
        }
        return ans;
    }
};
