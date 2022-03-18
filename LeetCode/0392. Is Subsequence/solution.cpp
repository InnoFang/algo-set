/**
 * 17 / 17 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6.3 MB 
 */
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) ++ i;
            ++ j;
        }
        return i == s.size();
    }
};
