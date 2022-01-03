/**
 * 166 / 166 test cases passed.
 * Runtime: 56 ms
 * Memory Usage: 6.9 MB 
 */
func canJump(nums []int) bool {
    farthest := 0
    for i, num := range nums {
        if i > farthest { return false }
        if i + num > farthest { farthest = i + num }
    }
    return true
}
