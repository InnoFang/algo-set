/**
 * Runtime: 0 ms
 * Memory Usage: 2 MB 
 */
func largestAltitude(gain []int) int {
    ans, pre := 0, 0
    for _, g := range gain {
        if pre + g > ans {
            ans = pre + g
        }
        pre += g
    }
    return ans
}
