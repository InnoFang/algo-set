/**
 * 39 / 39 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 1.9 MB
 */
func tribonacci(n int) int {
	if n < 2 {
		return n
	}
	a, b, c := 0, 1, 1
	for i := 3; i <= n; i++ {
		a, b, c = b, c, a+b+c
	}
	return c
}
