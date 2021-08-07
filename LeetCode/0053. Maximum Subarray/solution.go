/**
 * 203 / 203 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 3.4 MB
 */
func maxSubArray(nums []int) int {
	dp := make([]int, len(nums)+1)
	ans := nums[0]
	for i, num := range nums {
		dp[i+1] = max(dp[i]+num, num)
		ans = max(ans, dp[i+1])
	}
	return ans
}

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}
