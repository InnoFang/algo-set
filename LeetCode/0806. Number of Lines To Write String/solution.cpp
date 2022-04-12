/**
 * 27 / 27 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6.6 MB 
 */
class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int k = 0;
        int level = 1;
        for (auto &c : s) {
            int w = widths[c - 'a'];
            if (k + w > 100) {
                k = 0;
                ++ level;
            }
            k += w;
        }
        return {level, k};
    }
};
