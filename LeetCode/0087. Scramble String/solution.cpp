/**
 * 288 / 288 test cases passed.
 * Runtime: 208 ms
 * Memory Usage: 34 MB 
 */
class Solution {
public:
    unordered_map<string, bool> cache;
    bool isScramble(string s1, string s2) {
        string s = s1 + s2;
        if (cache.count(s)) return cache[s];
        if (s1 == s2) {
            cache[s] = true;
            return true;
        }
        int len = s1.size();
        for (int i = 1; i < len; ++ i) {
            string a = s1.substr(0, i), b = s1.substr(i);
            if (isScramble(a, s2.substr(0, i)) && isScramble(b, s2.substr(i)) || 
                isScramble(a, s2.substr(len - i)) && isScramble(b, s2.substr(0, len - i))) {
                    cache[s] = true;
                    return true;
            }
        }
        cache[s] = false;
        return false;
    }
};
