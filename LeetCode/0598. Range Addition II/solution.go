/**
 * 69 / 69 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 3.7 MB 
 */
func maxCount(m int, n int, ops [][]int) int {
    min_x, min_y := m, n
    for _, item := range ops {
        if min_x > item[0] { min_x = item[0] }
        if min_y > item[1] { min_y = item[1] }
    }    
    return min_x * min_y
}
