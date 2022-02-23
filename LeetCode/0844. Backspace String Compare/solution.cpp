/**
 * 113 / 113 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6.2 MB 
 */
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int p = s.size() - 1, q = t.size() - 1;
        int p_back = 0, q_back = 0;
        while (p >= 0 || q >= 0) {
            while (p >= 0) {
                if (s[p] == '#') {
                    ++ p_back, -- p;
                } else if (p_back > 0) {
                    -- p_back, -- p;
                } else break;
            }
            while (q >= 0) {
                if (t[q] == '#') {
                    ++ q_back, -- q;
                } else if (q_back > 0) {
                    -- q_back, -- q;
                } else break;
            }
            if (p >= 0 && q >= 0) {
                if (s[p] != t[q]) return false;
            } else if (p >= 0 || q >= 0) {
                return false;
            }
            -- p, -- q; 
        }
        return true;
    }
};
