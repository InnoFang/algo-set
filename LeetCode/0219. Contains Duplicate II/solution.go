/**
 * 51 / 51 test cases passed.
 * Runtime: 108 ms
 * Memory Usage: 8.6 MB 
 */
func containsNearbyDuplicate(nums []int, k int) bool {
    n, set := len(nums), map[int]bool{}
    for i := 0; i < n; i++ {
        if i > k {
            set[nums[i - k - 1]] = false
        }
        if set[nums[i]] {
            return true
        }
        set[nums[i]] = true
    }
    return false
}
