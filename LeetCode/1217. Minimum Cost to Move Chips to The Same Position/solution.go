/**
 * 51 / 51 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 2 MB 
 */
func minCostToMoveChips(position []int) int {
    cnt := [2]int{}
    for _, x := range position {
        cnt[x & 1] ++
    }
    return min(cnt[0], cnt[1])
}

func min(x, y int) int {
    if x > y { return y }
    return x
}
