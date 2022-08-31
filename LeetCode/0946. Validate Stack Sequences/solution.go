/**
 * 151 / 151 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 3.6 MB 
 */
func validateStackSequences(pushed []int, popped []int) bool {
    s := []int{}
    i := 0
    for _, num := range pushed {
        s = append(s, num)
        for len(s) > 0 && s[len(s) - 1] == popped[i] {
            s = s[:len(s)-1]
            i++ 
        }
    }
    return len(s) == 0
}
