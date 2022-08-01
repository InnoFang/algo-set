/**
 * 103 / 103 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 2 MB 
 */
func generateTheString(n int) string {
    if n % 2 == 1 {
        return strings.Repeat("a", n)
    }
    return strings.Repeat("a", n - 1) + "b"
}
