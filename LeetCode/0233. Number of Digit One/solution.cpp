/**
 * 38 / 38 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.7 MB 
 */
class Solution {
public:
    int countDigitOne(int n) {
        uint64_t ans = 0, before = 0, i = 1;
        while (n > 0) {
            int digit = n % 10;
            n /= 10; 
            if (digit > 1) ans += (n + 1) * i;
            else if (digit == 1) ans += n * i + before + 1;
            else ans += n * i;
            before += digit * i;
            i *= 10;
        }
        return ans;
    }
};
