/**
 * 71 / 71 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6.1 MB 
 */
class Solution {
public:
    string truncateSentence(string s, int k) {
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == ' ' && --k == 0) {
                return s.substr(0, i);
            }
        }
        return s;
    }
};
