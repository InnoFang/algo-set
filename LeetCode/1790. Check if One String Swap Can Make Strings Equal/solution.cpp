/**
 * 60 / 60 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6.1 MB 
 */
class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int i = -1, j = -1, n = s1.size();
        for (int k = 0; k < n; ++ k) {
            if (s1[k] != s2[k]) {
                if (i == -1) i = k;
                else if (j == -1) j = k;
                else return false;
            }
        }
        if (i == -1) return true;
        if (j == -1) return false;
        return s1[i] == s2[j] && s1[j] == s2[i];
    }
};
