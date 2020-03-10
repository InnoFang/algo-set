/**
 * 200 / 200 test case passed
 * Status: Accepted
 * Runtime: 1964 ms
 */
class Solution {
public:
    int maxProfit(vector<int>& prices) { 
        int profit = 0;
        for (int i = 0; i < prices.size(); i++) {
            for (int j = i + 1; j < prices.size(); j++) {
                if (prices[i] < prices[j])
                    profit = max(profit, prices[j] - prices[i]);
            }
        }
        return profit;
    }
};

