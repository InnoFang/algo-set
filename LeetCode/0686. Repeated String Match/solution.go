/**
 * 57 / 57 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 2.3 MB 
 */
func repeatedStringMatch(a string, b string) int {
    times := (len(b) - 1) / len(a) + 1
    temp := strings.Repeat(a, times)
    for i := 0; i <= 1; i++ {
        if strings.Contains(temp, b) {
            return times + i
        }
        temp += a
    }
    return -1
}
