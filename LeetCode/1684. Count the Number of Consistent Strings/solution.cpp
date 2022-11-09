/**
 * Runtime: 36 ms
 * Memory Usage: 29.3 MB 
 */
class Solution {
public:
    size_t to_code(const string& s) {
        size_t code = 0;
        for (const auto &c: s) {
            code |= 1 << (c - 'a');
        }
        return code;
    }
    int countConsistentStrings(const string &allowed, vector<string>& words) {
        size_t allowed_code = to_code(allowed); 
        int ans = 0;
        for (const auto &word: words) {
            ans += (allowed_code | to_code(word)) == allowed_code;
        }
        return ans;
    }
};
