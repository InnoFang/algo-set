/**
 * 232 / 232 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 2.2 MB 
 */
func dominantIndex(nums []int) int {
    n := len(nums)
    if n == 1 { return 0 }
    first, second := 0, -1
    for i := 1; i < n; i++ {
        if nums[i] > nums[first] {
            second = first
            first = i
        } else if second == -1 || nums[i] > nums[second] {
            second = i
        }
    }
    if nums[first] >> 1 >= nums[second] {
        return first
    } 
    return -1
}
