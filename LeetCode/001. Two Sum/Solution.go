/**
 * 29 / 29 test cases passed
 * Status: Accepted
 * Runtime: 8ms
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
