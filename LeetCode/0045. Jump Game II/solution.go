/**
 * 106 / 106 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 5.5 MB 
 */
func jump(nums []int) int {
    farthest, ans, end := 0, 0, 0
    for i, num := range nums[:len(nums)-1] {
        if i + num > farthest { farthest = num + i }
        if i == end {
            end = farthest
            ans ++
        }
    }
    return ans
}
