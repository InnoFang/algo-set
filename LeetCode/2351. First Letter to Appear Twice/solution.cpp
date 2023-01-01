/**
 * Runtime: 0 ms
 * Memory Usage: 6 MB 
 */
class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char, int> cnt;
        for (auto &c: s) {
            cnt[c]++;
            if (cnt[c] == 2) {
                return c;
            }
        }
        return {};
    }
};