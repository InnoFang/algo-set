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

/**
 * 200 / 200 test case passed
 * Status: Accepted
 * Runtime: 12 ms
 */
class Solution2 {
public:
    int maxProfit(vector<int>& prices) { 
        if (!prices.size()) return 0;
        int profit = 0;
        int min = prices[0];
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < min) {
                min = prices[i];
            } else {
                profit = max(profit, prices[i] - min);
            }
        }
        return profit;
    }
};

