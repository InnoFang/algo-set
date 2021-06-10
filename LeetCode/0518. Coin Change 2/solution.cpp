/**
 * 28 / 28 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 6.9 MB 
 */
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> dp(amount + 1);
        dp[0] = 1;
        for (auto& coin: coins) {
            for (int i = coin; i <= amount; ++ i) {
                dp[i] += dp[i - coin];
            }
        }
        return dp[amount];
    }
};
