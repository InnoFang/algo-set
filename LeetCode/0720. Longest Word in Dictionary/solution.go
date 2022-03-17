/**
 * 59 / 59 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 6.4 MB 
 */
 func longestWord(words []string) string {
    sort.Slice(words, func(i, j int) bool {
        s, t := words[i], words[j]
        return len(s) < len(t) || len(s) == len(t) && s > t
    })
    var ans string
    candidates := map[string]struct{}{"":{}}
    for _, word := range words {
        if _, ok := candidates[word[:len(word) - 1]]; ok {
            ans = word
            candidates[word] = struct{}{}
        }
    }
    return ans
}
