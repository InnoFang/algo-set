/**
 * 45 / 45 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 1.9 MB
 */
func climbStairs(n int) int {
	steps := make([]int, n+1)
	steps[0] = 1
	steps[1] = 1
	for i := 2; i <= n; i++ {
		steps[i] += steps[i-1] + steps[i-2]
	}
	return steps[n]
}

/**
 * 45 / 45 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 1.9 MB
 */
func climbStairs_2(n int) int {
    a, b := 1, 1
    for i := 2; i <= n; i ++ {
        a, b = b, a + b
    }
    return b
}
