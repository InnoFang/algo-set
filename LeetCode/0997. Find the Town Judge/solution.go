/**
 * 92 / 92 test cases passed.
 * Runtime: 88 ms
 * Memory Usage: 7.7 MB 
 */
 func findJudge(n int, trust [][]int) int {
    degree := make([]int, n + 1)
    for _, t := range trust {
        degree[t[0]] -= 1
        degree[t[1]] += 1
    }
    for i, d := range degree[1:] {
        if d == n - 1 {
            return i + 1
        }
    }
    return -1
}
