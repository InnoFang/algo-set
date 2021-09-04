/**
 * 283 / 283 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 3 MB
 */
func minCostClimbingStairs(cost []int) int {
	size := len(cost)
	dp := make([]int, size+1)
	dp[1] = cost[0]
	for i := 2; i <= size; i++ {
		dp[i] = min(dp[i-1], dp[i-2]) + cost[i-1]
	}
	return min(dp[size], dp[size-1])
}

/**
 * 283 / 283 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 2.8 MB
 */
func minCostClimbingStairs2(cost []int) int {
	a, b := 0, 0
	for i := 2; i <= len(cost); i++ {
		a, b = b, min(a+cost[i-2], b+cost[i-1])
	}
	return b
}

func min(a, b int) int {
	if a < b {
		return a
	}
	return b
}
