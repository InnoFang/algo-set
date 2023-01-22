/**
 * Runtime: 8 ms
 * Memory Usage: 6.3 MB 
 */
 func max(x, y int) int {
    if x > y {
        return x
    }
    return y
}

func maxPoolingKernel(grid [][]int, x, y int) (mx int) {
    for i := x; i < x + 3; i++ {
        for j := y; j < y + 3; j++ {
            mx = max(mx, grid[i][j])
        }
    }
    return
}

func largestLocal(grid [][]int) [][]int {
    n := len(grid)
   	ans := make([][]int, n - 2)
	for i := range ans {
		ans[i] = make([]int, n - 2)
	} 
    for i := 0; i < n - 2; i++ {
        for j := 0; j < n - 2; j++ {
            ans[i][j] = maxPoolingKernel(grid, i, j)
        }
    }
    return ans
}
