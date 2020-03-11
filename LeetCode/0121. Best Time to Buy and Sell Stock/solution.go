/**
 * 200 / 200 test cases passed
 * Status: Accepted
 * Runtime: 4 ms
 */
func maxProfit(prices []int) int {
    min, profit := int(^uint(0) >> 1), 0
    for _, p := range prices {
        if min > p {
            min = p
        } else {
            diff := p - min
            if diff > profit {
                profit = diff
            }
        }
    }
    return profit
}