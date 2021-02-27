/**
 * 31 / 31 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 6.8 MB 
 */
class Solution {
public:
    int dfs(string s,  int left, int right, int k) {
        vector<int> freq(26, 0);
        for (int i = left; i <= right; ++ i) {
            freq[s[i] - 'a'] ++;
        }
        char split = 0;
        for (int i = 0; i < 26; ++ i) {
            if (freq[i] > 0 && freq[i] < k) {
                split = i + 'a';
                break;
            }
        }
        if (split == 0) {
            return right - left + 1;
        }
        int i = left;
        int ret = 0;
        while (i <= right) {
            while (i <= right && s[i] == split) ++ i;
            if (i > right) break;
            int start = i;
            while (i <= right && s[i] != split) ++ i;
            ret = max(ret, dfs(s, start, i - 1, k));
        }
        return ret;
    }
    int longestSubstring(string s, int k) {
        return dfs(s, 0, s.size() - 1, k);
    }
};

