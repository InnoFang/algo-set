/**
 * Runtime: 4 ms
 * Memory Usage: 6.3 MB 
 */
class Solution {
public:
    int countAsterisks(string s) {
        bool open = true;
        int ans = 0;
        for (auto &c: s) {
            if (c == '|') {
                open = !open;
            }
            if (open && c == '*') {
                ++ ans;
            }
        }
        return ans;
    }
};
