/**
 * 480 / 480 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 7.4 MB 
 */
class Solution {
public:
    string reverseVowels(string s) {
        string vowels = "aeiouAEIOU";
        for (int l = 0, r = s.size() - 1; l < r; ++ l, -- r) { 
            while (l < r && vowels.find(s[l]) == -1) ++ l;
            while (l < r && vowels.find(s[r]) == -1) -- r;
            if (l < r) swap(s[l], s[r]);
        }
        return s;
    }
};