/**
 * 126 / 126 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 1.9 MB
 */
func minSteps(n int) int {
	if n == 1 {
		return 0
	}
	x := n >> 1
	for ; n%x != 0; x-- {}
	return minSteps(x) + (n / x)
}
