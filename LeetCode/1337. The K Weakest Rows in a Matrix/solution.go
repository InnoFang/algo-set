/**
 * 39 / 39 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.9 MB 
 */
func twoSum(nums []int, target int) []int { 
    store := make(map[int]int)
    for idx, n := range nums {
        if diffIdx, ok := store[target - n]; ok {
            return []int{diffIdx, idx}
        } else {
            store[n] = idx
        }
    }
    return []int{}
}
