/**
 * 115 / 115 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.9 MB 
 */
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int l = 0, r = s.size() - 1;
        while (l < r) {
            while (l < r && !isalpha(s[l])) ++ l;
            while (l < r && !isalpha(s[r])) -- r;
            if (l < r) swap(s[l], s[r]);
            ++ l, -- r;
       }
       return s;
    }
};
