/**
 * 204 / 204 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 1.8 MB 
 */
 func hasAlternatingBits(n int) bool {
    x := n ^ (n >> 1)    
    return (x & (x + 1)) == 0
}
