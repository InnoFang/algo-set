/**
 * 37 / 37 test cases passed.
 * Runtime: 64 ms
 * Memory Usage: 8.1 MB 
 */
 func minimumAbsDifference(arr []int) (ans [][]int) {
    sort.Ints(arr)
    for i, min_abs := 0, math.MaxInt32; i < len(arr) - 1; i++ {
        if delta := arr[i + 1] - arr[i]; delta < min_abs {
            min_abs = delta
            ans = [][]int{{arr[i], arr[i + 1]}}
        } else if delta == min_abs {
            ans = append(ans, []int{arr[i], arr[i + 1]})
        }
    }
    return
}
