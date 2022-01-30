/**
 * 55 / 55 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 2.1 MB 
 */
 func uncommonFromSentences(s1 string, s2 string) []string {
    record := make(map[string]int)
    for _, word := range strings.Fields(s1 + " " + s2) {
        record[word] += 1
    }
    ans := make([]string, 0)
    for k, v := range record {
        if v == 1 {
            ans = append(ans, k)
        }
    }
    return ans
}
