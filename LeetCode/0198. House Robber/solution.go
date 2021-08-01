/**
 * 68 / 68 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 2 MB
 */
func rob(nums []int) int {
	n := len(nums)
	dp := make([]int, n+1)
	dp[1] = nums[0]
	for i := 2; i <= n; i++ {
		dp[i] = max(dp[i-1], dp[i-2]+nums[i-1])
	}
	return dp[n]
}

/**
 * 68 / 68 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 2 MB
 */
func rob2(nums []int) int {
	n := len(nums)
	a, b := 0, nums[0]
	for i := 2; i <= n; i++ {
		a, b = b, max(b, a+nums[i-1])
	}
	return b
}

func max(a, b int) int {
	if a < b {
		return b
	}
	return a
}
