/**
 * 200 / 200 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.8 MB 
 */
class Solution {
public:
    int numberOfMatches(int n) {
        int ans = 0;
        while (n > 1) {
            int passed = n & 1;
            n >>= 1; 
            ans += n;
            n += passed;
        }
        return ans;
    }
};
