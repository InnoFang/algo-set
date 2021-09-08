/**
 * 40 / 40 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 1.9 MB 
 */
 func balancedStringSplit(s string) int {
    ans, total := 0, 0
    for _, c := range s {
        if c == 'R' { total += 1 } else { total -= 1 }
        if total == 0 { ans += 1 } 
    }
    return ans
}
