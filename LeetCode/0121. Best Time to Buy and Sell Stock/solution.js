/**
 * 200 / 200 test cases passed
 * Status: Accepted
 * Runtime: 64 ms
 * 
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    [min, profit] = [Number.MAX_SAFE_INTEGER, 0]
    for (let p of prices) {
        min = Math.min(min, p)
        profit = Math.max(profit, p - min)
    }
    return profit
};