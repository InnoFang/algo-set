/**
 * 211 / 211 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 2.9 MB 
 */
impl Solution {
    pub fn max_profit(prices: Vec<i32>) -> i32 {
        let (mut buy, mut sell) = (prices[0], 0);
        for i in (1..prices.len()) {
            sell = sell.max(prices[i] - buy);
            buy = buy.min(prices[i]);
        }
        sell
    }
}
