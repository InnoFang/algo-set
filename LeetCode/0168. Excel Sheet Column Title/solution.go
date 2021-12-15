/**
 * 18 / 18 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 1.9 MB 
 */
 func convertToTitle(columnNumber int) string {
    ans := []byte{}
    for columnNumber != 0 {
        columnNumber -= 1
        ans = append(ans, 'A' + byte(columnNumber % 26))
        columnNumber /= 26
    }
    for i, n := 0, len(ans) ; i < n / 2; i ++ {
        ans[i], ans[n - 1 - i] = ans[n - 1 - i], ans[i]
    }
    return string(ans)
}
