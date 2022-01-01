/**
 * 107 / 107 test cases passed.
 * Runtime: 120 ms
 * Memory Usage: 8.7 MB 
 */
func construct2DArray(original []int, m int, n int) [][]int {
    if len(original) != m * n {
        return [][]int{}
    }    
    mat := make([][]int, 0, m)
    for i := 0; i < len(original); i += n {
        mat = append(mat, original[i:i+n])
    }
    return mat
}
