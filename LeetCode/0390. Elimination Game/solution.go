/**
 * 3377 / 3377 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 2.7 MB 
 */
func lastRemaining(n int) int {
    head, step, left := 1, 1, true
    for ; n > 1; n >>= 1 {
        if left || n & 1 == 1 {
            head += step
        }
        step <<= 1
        left = !left
    }
    return head
}
