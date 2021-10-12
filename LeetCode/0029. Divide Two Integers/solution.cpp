/**
 * 992 / 992 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 5.9 MB 
 */
class Solution {
    private:
    const int limit = INT_MIN >> 1;
public:
    int divide(int dividend, int divisor) {
        if (dividend ==       0 || divisor ==  1) return dividend;
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;
        if (divisor  ==      -1)                  return -dividend;

        int sign = (dividend > 0) ^ (divisor > 0);
        if (dividend > 0) dividend = -dividend;
        if (divisor  > 0) divisor  = -divisor;
        
        int ans = 0;
        while (dividend <= divisor) {
            int delta = divisor, inc = 1;
            // Because of the `dividend` and `divisor` are all negative,
            // and only when 2 time delta is larger than dividend will terminal this loop,
            // that's mean when `-(2 * delta) <= -dividend` 
            //               =>    `2 * delta >= dividend`
            //               =>        `delta >= dividend - delta` (multiplication is not allowed)   
            // will make `delta` and `inc` be added doubly continuously     
            // 
            // NOTE since `delta` is negative, so when `delta` is smaller than the half of INT_MIN in the process of its update, 
            //      which means the `delta` will overflow.  
            while (delta >= limit && delta >= dividend - delta) {
                delta += delta;
                inc += inc;
            }
            dividend -= delta;
            ans += inc;
        }
        return sign ? -ans : ans;
    }
};
