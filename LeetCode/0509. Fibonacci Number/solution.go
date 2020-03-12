/**
 * 31 / 31 test cases passed
 * Status: Accepted
 * Runtime: 0 ms
 */
func fib(N int) int {
    if N < 2 {
        return N
    }
    f1, f2 := 0, 1
    for i := 2; i <= N; i++ {
        f2 = f1 + f2
        f1 = f2 - f1
    }
    return f2
}
