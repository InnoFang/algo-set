/**
 * 27 / 27 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6 MB 
 */
class Solution {
public:
    int countSegments(string s) {
        if (s == "") return 0;

        int ans = 0;
        int beg = 0, end = s.size() - 1;
        while (beg < s.size() && s[beg] == ' ') beg++;
        while (end >= 0 && s[end] == ' ') end--;
        if (beg > end) return 0;

        for (int i = beg; i <= end; i++) {
            if (s[i] == ' ' && (i > 0 && s[i - 1] != ' ')) {
                ans++;
            }
        }
        return ans + 1;
    }
};

/**
 * 27 / 27 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6.1 MB 
 */
class Solution2 {
public:
    int countSegments(string s) {
        istringstream iss(s);
        string next;
        int ans = 0;
        while (iss) {
            iss >> next;
            ans += 1;
        }
        return ans - 1;
    }
};

/**
 * 27 / 27 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6.1 MB 
 */
class Solution3 {
public:
    int countSegments(string s) {
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            if ((i == 0 || s[i - 1] == ' ') && s[i] != ' ') {
                ans ++;
            }
        }
        return ans;
    }
};
