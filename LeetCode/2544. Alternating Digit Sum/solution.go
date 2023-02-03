/**
 * Runtime: 0 ms
 * Memory Usage: 1.8 MB 
 */
 func alternateDigitSum(n int) int {
    total, sign := 0, 1
    for ; n > 0; n /= 10 {
        total += (n % 10) * sign
        sign = -sign
    }
    return total * -sign
}