/**
 * 269 / 269 test cases passed.
 * Runtime: 3 ms
 * Memory Usage: 6.4 MB 
 */
class Solution {
public:
    bool check(string sub) {
        return (sub[0] == '1' || sub[0] == '2' && sub[1] <= '6');
    }
    int numDecodings(string s) {
        vector<int> dp(s.size() + 1);
        dp[0] = 1;
        dp[1] = s[0] != '0';
        
        for (int i = 1; i < s.size(); ++ i) {
            dp[i + 1] = (s[i] != '0' ? dp[i] : 0) 
                      + (check(s.substr(i - 1, i + 1)) ? dp[i - 1] : 0);
        }
        return dp.back();
    }
};
