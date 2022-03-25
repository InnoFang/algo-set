/**
 * 500 / 500 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 1.8 MB 
 */
 func trailingZeroes(n int) int {
    ans := 0    
    for n > 0 {
        ans += n / 5
        n /= 5
    }
    return ans
}
