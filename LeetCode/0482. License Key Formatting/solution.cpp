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

/**
 * 38 / 38 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 8.9 MB 
 */
class Solution2 {
public:
    string licenseKeyFormatting(string s, int k) {
        string license = "";
        for (auto& c: s) {
            if (c == '-') continue;
            if ('a' <= c && c <= 'z') c -= 32;
            license += c;
        }  
        int sz = license.size();
        int first = sz % k;
        if (first == 0) first = k;
        string ans = license.substr(0, first);
        ans += "-";
        for (int i = first; i < sz; i += k) {
            ans += license.substr(i, k);
            ans += "-";
        }
        if (ans.back() == '-') ans.pop_back();
        return ans;
    }
};
