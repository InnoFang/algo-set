/**
 * 73 / 73 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6.1 MB 
 */
class Solution {
public:
    string longestNiceSubstring(string s) {
        int n = s.size();
        int nice_beg = 0, nice_len = 0;
        for (int l = 0; l < n; ++ l) {
            int lower = 0, upper = 0;
            for (int r = l; r < n; ++ r) {
                if (islower(s[r])) lower |= 1 << (s[r] - 'a');
                else upper |= 1 << (s[r] - 'A');
                if (lower == upper && r - l + 1 > nice_len) {
                    nice_len = r - l + 1;
                    nice_beg = l;
                }
            }
        }
        return s.substr(nice_beg, nice_len);
    }
};
