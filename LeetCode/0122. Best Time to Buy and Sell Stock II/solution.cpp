/**
 * 200 / 200 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 12.8 MB 
 */
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        for (int i = 1; i < prices.size(); ++ i) {
            if (prices[i] > prices[i - 1]) {
                ans += (prices[i] - prices[i - 1]);
            }
        }
        return ans;
    }
};
