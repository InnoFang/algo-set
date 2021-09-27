/**
 * 217 / 217 test cases passed.
 * Runtime: 40 ms
 * Memory Usage: 21.1 MB 
 */
class Solution {
public:
    static const int MOD = 1e9 + 7;
    int numDecodings(string s) {
        size_t n = s.size();

        vector<uint64_t> dp(n + 1);
        dp[0] = 1;
    
        if (s[0] == '0') dp[1] = 0;
        else if (s[0] == '*') dp[1] = 9;
        else dp[1] = 1;

        for (size_t i = 1; i < n; i++) {
            if (s[i] != '*') {
                if (s[i] != '0') dp[i + 1] = dp[i];

                if ((s[i - 1] == '1') ||
                    (s[i - 1] == '2' && s[i] <= '6') ||
                    (s[i - 1] == '*' && s[i] >  '6'))    dp[i + 1] += dp[i - 1];
                else if (s[i - 1] == '*' && s[i] <= '6') dp[i + 1] += 2 * dp[i - 1];
            } else {
                dp[i + 1] = dp[i] * 9; 

                if (s[i - 1] == '1')      dp[i + 1] += dp[i - 1] * 9;
                else if (s[i - 1] == '2') dp[i + 1] += dp[i - 1] * 6;
                else if (s[i - 1] == '*') dp[i + 1] += dp[i - 1] * 15;
            }
            dp[i + 1] %= MOD;
        }
        
        return dp[n];
    }
};
