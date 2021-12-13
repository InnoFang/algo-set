/**
 * 114 / 114 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 2 MB 
 */
func toLowerCase(s string) string {
    bytes := []byte(s)
    for i, c := range s {
        if 'A' <= c && c <= 'Z' {
            bytes[i] += 32
        }
    }
    return string(bytes)
}
