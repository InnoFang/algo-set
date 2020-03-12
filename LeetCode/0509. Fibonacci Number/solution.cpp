/**
 * 31 / 31 test cases passed
 * Status: Accepted
 * Runtime: 0 ms
 */
class Solution {
public:
    int fib(int N) {
        int a = 0, b = 1, ans = 0;
        for (int i = 1; i <= N; i++) {
            ans = b;
            b = a + b;
            a = ans;
        }
        return ans;
    }
};
