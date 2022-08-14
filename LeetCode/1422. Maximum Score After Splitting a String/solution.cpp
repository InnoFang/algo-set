/**
 * 104 / 104 test cases passed.
 * Runtime: 48 ms
 * Memory Usage: 14.9 MB 
 */
class Solution {
public:
    int maxScore(string s) {
        int score = s[0] == '0' ? 1 : 0;
        for (int i = 1; i < s.size(); ++ i) {
            score += s[i] == '1' ? 1 : 0;
        }
        int ans = score;
        for (int i = 1; i < s.size() - 1; ++ i) {
            score += s[i] == '0' ? 1 : -1;
            ans = max(ans, score);
        }
        return ans;
    }
};
