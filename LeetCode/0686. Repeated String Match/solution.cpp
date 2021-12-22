/**
 * 57 / 57 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 6.8 MB 
 */
class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        uint32_t a_bmp = 0, b_bmp = 0;
        for (auto &c : a) a_bmp |= 1 << (c - 'a');
        for (auto &c : b) b_bmp |= 1 << (c - 'a');
        // set(B) is subset of set(A)
        if (a_bmp & b_bmp != b_bmp) return -1;

        int times = (b.size() - 1) / a.size() + 1;
        string pattern = "";
        for (int i = 0; i < times; ++ i) pattern += a;
        if (pattern.find(b) != pattern.npos) return times;
        pattern += a;
        if (pattern.find(b) != pattern.npos) return times + 1;
        return -1;
    }
};

/**
 * 57 / 57 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 6.7 MB 
 */
class Solution2 {
public:
    int repeatedStringMatch(string a, string b) {
        int times = (b.size() - 1) / a.size() + 1;
        string pattern = "";
        for (int i = 0; i < times; ++ i) pattern += a;
        if (pattern.find(b) != pattern.npos) return times;
        pattern += a;
        if (pattern.find(b) != pattern.npos) return times + 1;
        return -1;
    }
}; 
