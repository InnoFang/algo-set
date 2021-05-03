/**
 * 1032 / 1032 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.9 MB 
 */
class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while (x) {
            if (ans < INT_MIN / 10 || ans > INT_MAX / 10) return 0;
            ans = ans * 10 + x % 10;
            x /= 10;
        }
        return ans;
    }
};
