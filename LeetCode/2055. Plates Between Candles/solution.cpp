/**
 * 35 / 35 test cases passed.
 * Runtime: 324 ms
 * Memory Usage: 141.6 MB 
 */
class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        int n = s.size(); 
        vector<int> left(n), right(n), psum(n);
        for (int i = 0, t = 0, l = -1, r = -1; i < n; ++ i) {
            if (s[i] == '*') ++ t;
            if (s[i] == '|') l = i;
            if (s[n - 1 - i] == '|') r = n - 1 - i;
            psum[i] = t;
            left[i] = l;
            right[n - 1 - i] = r;
        }
        vector<int> ans;
        for (auto &query : queries) {
            int l = right[query[0]], r = left[query[1]];
            ans.emplace_back(l == -1 || r == -1 || l >= r ? 0 : psum[r] - psum[l]);
        }
        return ans;
    }
};
