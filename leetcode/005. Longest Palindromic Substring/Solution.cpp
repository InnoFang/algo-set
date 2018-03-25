/**
 * 94 / 94 test cases passed.
 * Status: Accepted
 * Runtime: 24 ms
 */
class Solution {
public:
    string longestPalindrome(string s) {
        int len = s.length();
        if (len < 2) return s;
        for (int i = 0; i < len; i++) {
            find(s, i, i);
            find(s, i, i + 1);
        }
        return s.substr(lo, max);
    }
private:
    void find(string s, int i, int j) {
        int len = s.length();
        while (i >= 0 && j < len && s[i] == s[j]) {
            i--;
            j++;
        }
        len = j - i - 1;
        if (len > max) {
            max = len;
            lo = i + 1;
        }
    }
    int max = 0;
    int lo = 0;
};