/**
 * Runtime: 0 ms
 * Memory Usage: 7.7 MB 
 */
class Solution {
public:
    string greatestLetter(string s) {
        unordered_set<char> rec(s.begin(), s.end());
        for (int i = 25; i >= 0; -- i) {
            if (rec.count('a' + i) && rec.count('A' + i)) {
                return string(1, 'A' + i);
            }
        }
        return "";
    }
};
