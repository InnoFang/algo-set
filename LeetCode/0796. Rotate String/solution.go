/**
 * 47 / 47 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 1.8 MB 
 */
 func rotateString(s string, goal string) bool {
    return len(s) == len(goal) && strings.Contains(s + s, goal)
}
