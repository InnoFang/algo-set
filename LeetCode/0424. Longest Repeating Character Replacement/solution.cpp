/**
 * 37 / 37 test cases passed.
 * Status: Accepted
 * Runtime: 4 ms
 */
class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> defq(26, 0);
        int l = 0, maxSame = 0, ans = 0;
        for (int r = 0; r < s.size(); ++ r) {
            defq[s[r] - 'A'] ++;
            maxSame = max(maxSame, defq[s[r] - 'A']);
            if (r - l + 1 - maxSame > k) {
                defq[s[l] - 'A'] --;
                l ++;
            }
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};

