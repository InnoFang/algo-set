/**
 * 211 / 211 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 3.9 MB 
 */
func countQuadruplets(nums []int) int {
    n, ans := len(nums), 0
    store := make(map[int]int)
    for b := n - 3; b >= 1; b -- {
        for d := b + 2; d < n; d ++ {
            store[nums[d] - nums[b + 1]] ++
        }
        for a := 0; a < b; a ++ {
            if val, ok := store[nums[a] + nums[b]]; ok {
                ans += val
            }
        }
    }
    return ans
}
