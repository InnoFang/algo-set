/**
 * 27 / 27 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 1.9 MB 
 */
 func numberOfLines(widths []int, s string) []int {
    level, k := 1, 0
    for _, c := range s {
        if w := widths[c - 'a']; k + w > 100 {
            level += 1
            k = w
        } else {
            k += w
        }
    }
    return []int{level, k}
}
