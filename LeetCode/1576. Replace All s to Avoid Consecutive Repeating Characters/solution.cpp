/**
 * 776 / 776 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 6 MB 
 */
class Solution {
public:
    string modifyString(string s) {
        int n = s.size();
        for (int i = 0; i < n; ++ i) {
            if (s[i] == '?') {
               for (int c = 'a'; c <= 'c'; ++ c) {
                   if (i > 0 && s[i - 1] == c || i < n - 1 && s[i + 1] == c) continue;
                   s[i] = c;
                   break;
               }
            }
        }
        return s;
    }
};
