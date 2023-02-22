/**
 * Runtime: 8 ms
 * Memory Usage: 7.2 MB 
 */
class Solution {
public:
    string sortString(string s) {
        vector<int> alpha(26);
        for (auto &c: s) {
            alpha[c - 'a'] ++;
        }
        string ans; 
        while (ans.size() < s.size()) {
            for (int i = 0; i < 26; ++ i) {
                if (alpha[i] > 0) {
                    -- alpha[i];
                    ans += ('a' + i);
                }
            }
            for (int i = 25; i >= 0; -- i) {
                if (alpha[i] > 0) {
                    -- alpha[i];
                    ans += ('a' + i);
                }
            }
        }
        return ans;
    }
};
