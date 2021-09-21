/**
 * 58 / 58 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 2.1 MB 
 */
 func lengthOfLastWord(s string) int {
    i, ans := len(s) - 1, 0
    for ; i >= 0 && s[i] == ' '; i-- {}
    for ; i >= 0 && s[i] != ' '; i-- { ans++ }
    return ans
}
