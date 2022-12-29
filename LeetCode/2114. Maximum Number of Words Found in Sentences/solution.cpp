/**
 * Runtime: 12 ms
 * Memory Usage: 9.3 MB 
 */
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        for (auto &sentence: sentences) {
            int s = 1;
            for (auto &c: sentence) {
                if (c == ' ') ++ s;
            }
            if (ans == 0 || s > ans) {
                ans = s;
            }
        }
        return ans;
    }
};
