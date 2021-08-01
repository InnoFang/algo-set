/**
 * 47 / 47 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 2.9 MB
 */
 func deleteAndEarn(nums []int) int {
    maxVal := 0
    for _, num := range nums {
        maxVal = max(maxVal, num)
    }
    cost := make([]int, maxVal + 1)
    for _, num := range nums {
        cost[num] += num
    }

    prev, curr := 0, 0
    for i := 0; i < len(cost); i ++ {
        prev, curr = curr, max(curr, prev + cost[i])
    }
    return curr
}

func max(a, b int) int {
    if a > b {
        return a
    }
    return b
}
