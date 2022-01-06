/**
 * 256 / 256 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 3.1 MB 
 */
func simplifyPath(path string) string { 
    stack := []string{}
    for _, sub := range strings.Split(path, "/") {
        if sub == ".." {
            if len(stack) > 0 {
                stack = stack[:len(stack) - 1]
            }
        } else if (sub != "." && sub != "") {
            stack = append(stack, sub)
        }
    }
    return "/" + strings.Join(stack, "/")
}
