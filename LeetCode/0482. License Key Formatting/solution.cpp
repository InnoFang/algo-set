/**
 * 38 / 38 test cases passed.
 * Runtime: 540 ms
 * Memory Usage: 8 MB 
 */
class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string license = "";
        for (auto& c: s) {
            if (c == '-') continue;
            if ('a' <= c && c <= 'z') c -= 32;
            license += c;
        }  
        int sz = license.size();
        for (int i = sz - k; i > 0; i -= k) {
            license.insert(license.begin() + i, '-');
        }
        return license;
    }
};
