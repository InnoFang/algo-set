/**
 * Runtime: 4 ms
 * Memory Usage: 6 MB 
 */
class Solution {
public:
    int percentageLetter(string s, char letter) {
        int cnt = 0;
        for (auto& c: s) {
            cnt += c == letter ? 1 : 0;
        } 
        return 100 * cnt / s.size();
    }
};
