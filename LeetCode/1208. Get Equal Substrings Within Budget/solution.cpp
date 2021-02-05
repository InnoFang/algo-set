/**
 * 37 / 37 test cases passed.
 * Status: Accepted
 * Runtime: 8 ms
 */
class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int ans = 0;
        for (int l = 0, r = 0, sum = 0; r < s.size(); ++ r) {
            sum += abs(s[r] - t[r]);
            while (sum > maxCost) {
                sum -= abs(s[l] - t[l]);
                l ++;
            } 
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};

