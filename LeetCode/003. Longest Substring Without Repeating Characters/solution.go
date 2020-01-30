/**
 * 987 / 987 test cases passed.
 * Status: Accepted
 * Runtime: 8 ms
 */
func lengthOfLongestSubstring(s string) int {
    lastOccured := make(map[byte]int)
    start := 0
    maxLength := 0
    for i, ch := range []byte(s) {
        if lastI, ok := lastOccured[ch]; ok && lastI >= start {
            start = lastI + 1
        }
        if i - start + 1 > maxLength {
            maxLength = i - start + 1
        }
        lastOccured[ch] = i
    }
    return maxLength
}
