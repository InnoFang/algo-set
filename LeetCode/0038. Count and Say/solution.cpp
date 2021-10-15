/**
 * 30 / 30 test cases passed.
 * Runtime: 16 ms
 * Memory Usage: 7 MB 
 */
class Solution {
public:
    string countAndSay(int n) {
        vector<string> dp(n);
        dp[0] = "1";
        for (int i = 1; i < n; i++) {
            string num = dp[i - 1];
            char alpha = num[0];
            int count = 1;
            string say = "";
            for (int j = 1; j < num.size(); j++) {
                if (num[j] == alpha) count++;
                else {
                    say += to_string(count) + alpha;
                    count = 1;
                    alpha = num[j];
                }
            }
            say += to_string(count) + alpha;
            dp[i] = say;
        }
        return dp.back();
    }
}
