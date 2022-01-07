/**
 * 167 / 167 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 1.9 MB 
 */
func maxDepth(s string) int {
    max_depth, depth := 0, 0
    for _, c := range s {
        if c == '(' { depth++ }
        if c == ')' { depth-- }
        if depth > max_depth { max_depth = depth }
    }
    return max_depth
}
