/**
 * Runtime: 0 ms
 * Memory Usage: 2 MB 
 */
func minimumOperations(nums []int) int {
    rec := make(map[int]struct{})
    for _, num := range nums {
        if num > 0 {
            rec[num] = struct{}{}
        }
    }
    return len(rec)
}
