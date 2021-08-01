/**
 * 74 / 74 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 2 MB
 */
func robByRange(nums []int, start, end int) int {
	a, b := 0, 0
	for i := start; i < end; i++ {
		a, b = b, max(b, a+nums[i])
	}
	return b
}

func rob(nums []int) int {
	n := len(nums)
	if n < 2 {
		return nums[0]
	}
	return max(robByRange(nums, 0, n-1), robByRange(nums, 1, n))
}

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}
