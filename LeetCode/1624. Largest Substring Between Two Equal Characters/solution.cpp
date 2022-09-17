/**
 * 54 / 54 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6.3 MB 
 */
class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char, int> rec;
        int ans = -1;
        for (int i = 0; i < s.size(); ++ i) {
            if (rec.count(s[i])) {
                ans = max(ans, i - rec[s[i]] - 1);
            } else {
                rec[s[i]] = i;
            }
        }
        return ans;
    }
};
