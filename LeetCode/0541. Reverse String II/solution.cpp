/**
 * 60 / 60 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 7.2 MB 
 */
class Solution {
public:
    void reverse(string& s, int from, int to) {
        for (int i = from, j = to - 1; i < j; ++ i, -- j) {
            swap(s[i], s[j]);
        }
    }
    string reverseStr(string s, int k) { 
        int n = s.size();
        for (int i = 0; i < n; i += 2 * k) { 
            reverse(s, i, min(i + k, n));
        }
        return s;
    }
};
