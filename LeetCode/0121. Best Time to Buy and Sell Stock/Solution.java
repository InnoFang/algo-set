/**
 * 200 / 200 test case passed
 * Status: Accepted
 * Runtime: 1 ms
 */
class Solution {
    public int maxProfit(int[] prices) {
        if (prices.length == 0) return 0;
        int profit = 0, min = prices[0];
        for (int i = 1; i < prices.length; i++) {
            if (prices[i] < min) {
                min = prices[i];
            } else {
                int diff = prices[i] - min;
                if (diff > profit) profit = diff;
            }
        } 
        return profit;
    }
}
