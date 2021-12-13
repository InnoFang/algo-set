/**
 * 114 / 114 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6 MB 
 */
class Solution {
public:
    string toLowerCase(string s) {
        for (auto &c : s) {
            if ('A' <= c && c <= 'Z') {
                c += 32;
            }
        }
        return s;
    }
};
