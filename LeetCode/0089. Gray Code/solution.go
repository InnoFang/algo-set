/**
 * 16 / 16 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 6.7 MB 
 */
func grayCode(n int) []int {
    ans := make([]int, 0, 1 << n) 
    for i := 0; i < cap(ans); i++ {
        ans = append(ans, i ^ (i >> 1))
    }
    return ans
}
