/**
 * 53 / 53 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 3.6 MB 
 */
 func shuffle(nums []int, n int) []int {
    ret := make([]int, 0, n + n)
    for i := 0; i < n; i ++ {
        ret = append(ret, nums[i], nums[i + n])
    }
    return ret
}
