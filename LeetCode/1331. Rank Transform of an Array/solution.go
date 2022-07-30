/**
 * 38 / 38 test cases passed.
 * Runtime: 64 ms
 * Memory Usage: 12.3 MB 
 */
func arrayRankTransform(arr []int) []int {
    a := append([]int{}, arr...)
    sort.Ints(a)
    rec := map[int]int{}
    for _, v := range a{
        if _, ok := rec[v]; !ok {
            rec[v] = len(rec) + 1
        }
    }
    for i, v := range arr {
        arr[i] = rec[v]
    }
    return arr
}
