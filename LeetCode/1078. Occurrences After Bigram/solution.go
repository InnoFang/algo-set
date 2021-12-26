/**
 * 30 / 30 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 2.1 MB 
 */
func findOcurrences(text string, first string, second string) []string {
    words := strings.Split(text, " ")
    ans := make([]string, 0, len(text))
    for i := 2; i < len(words); i++ {
        if words[i - 2] == first && words[i - 1] == second {
            ans = append(ans, words[i]);
        }
    } 
    return ans    
}
