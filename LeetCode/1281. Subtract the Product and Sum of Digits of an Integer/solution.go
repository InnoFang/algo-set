/**
 * Runtime: 0 ms
 * Memory Usage: 1.8 MB 
 */
 func subtractProductAndSum(n int) int {
    p, s := 1, 0
    for ; n > 0; n /= 10 {
        p *= n % 10
        s += n % 10
    }
    return p - s
}
