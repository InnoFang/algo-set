/**
 * 76 / 76 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6.6 MB 
 */
class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int> ans(n);
        for (int l = -1, r = 0; r < n; ++ r) {
            if (s[r] == c) {
                if (l == -1) {
                    for (l = 0; l < r; ++ l) {
                        ans[l] = r - l;
                    }
                } else {
                   for (int i = l + 1; i < r; ++ i) {
                       ans[i] = min(i - l, r - i);
                   }
                   l = r;
                }
            } else if (r == n - 1) {
                for (int i = l + 1; i <= r; ++ i) {
                    ans[i] =  i - l;
                }
            }
        }
        return ans;
    }
};
