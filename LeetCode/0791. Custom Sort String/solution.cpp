/**
 * Runtime: 4 ms
 * Memory Usage: 6 MB 
 */
class Solution {
public:
    string customSortString(string order, string s) {
        vector<int> freq(26);
        for (auto &c: s) {
            ++ freq[c - 'a'];
        }
        string ans;
        for (auto &c: order) {
            if (freq[c - 'a'] > 0) {
                ans += string(freq[c - 'a'], c);
                freq[c - 'a'] = 0;
            }
        }
        for (int i = 0; i < 26; ++ i) {
            if (freq[i] > 0) {
                ans += string(freq[i], 'a' + i);
            }
        }
        return ans;
    }
};
