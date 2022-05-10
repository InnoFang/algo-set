/**
 * 95 / 95 test cases passed.
 * Runtime: 52 ms
 * Memory Usage: 15.8 MB 
 */
class Solution {
public:
    vector<int> diStringMatch(string s) {
        int lo = 0, hi = s.size(), n = s.size();
        vector<int> ans(n + 1);
        for (int i = 0; i < n; ++ i) {
            if (s[i] == 'I') {
                ans[i] = lo;
                ++ lo;
            } else {
                ans[i] = hi;
                -- hi;
            }
        }
        ans[n] = lo;
        return ans;
    }
};
