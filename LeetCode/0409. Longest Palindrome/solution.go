/**
 * 95 / 95 test case passed
 * Status: Accepted
 * Runtime: 0 ms
 */
func longestPalindrome(s string) int {
    store := make(map[rune]int)
    for _, c := range s {
        store[c]++
    }
    ans, haveOdd := 0, false
    for _, v := range store {
        if v & 1 == 1 {
            ans += v - 1
            haveOdd = true
        } else {
            ans += v
        }
    }
    if haveOdd {
        ans++
    }
    return ans
}
