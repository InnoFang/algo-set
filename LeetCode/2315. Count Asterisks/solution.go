/**
 * Runtime: 0 ms
 * Memory Usage: 1.9 MB 
 */
func countAsterisks(s string) (ans int) {
    open:= true
    for _, c := range s {
        if c == '|' {
            open = !open
        } else if open && c == '*' {
            ans++
        }
    }
    return
}
