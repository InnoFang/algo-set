/**
 * 504 / 504 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 6.3 MB 
 */
class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        vector<int> fib;
        fib.emplace_back(1);
        int a = 1, b = 1;
        while (a + b <= k) {
            int c = a + b;
            fib.emplace_back(c);
            a = b;
            b = c;
        }
        int ans = 0;
        for (int i = fib.size() - 1; i >= 0 && k > 0; --i) {
            int num = fib[i];
            if (k >= num) {
                k -= num;
                ++ ans;
            }
        }
        return ans;
    }
};
