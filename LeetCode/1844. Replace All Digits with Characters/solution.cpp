/**
 * Runtime: 0 ms
 * Memory Usage: 5.9 MB 
 */
class Solution {
public:
    string replaceDigits(string s) {
        for (int i = 1; i < s.size(); i += 2) {
            s[i] = s[i - 1] + (s[i] - '0');
        }
        return s;
    }
};
