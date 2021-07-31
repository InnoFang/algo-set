/**
 * 39 / 39 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.9 MB 
 */
class Solution {
public:
    int tribonacci(int n) {
        if (n < 2) return n;
        int a = 0, b = 1, c = 1, t1, t2;
        for (int i = 3; i <= n; ++ i) {
            t1 = c;
            t2 = b;
            c = a + b + c;
            b = t1;
            a = t2;
        }
        return c;
    }
};
