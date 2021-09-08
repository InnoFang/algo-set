/**
 * 40 / 40 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6 MB 
 */
class Solution {
public:
    int balancedStringSplit(string s) {
        int ans = 0, total = 0;
        for (char& c: s) {
            total += (c == 'R') ? 1 : -1;
            ans += (total == 0) ? 1 : 0;
        }
        return ans;
    }
};
