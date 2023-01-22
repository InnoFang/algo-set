/**
 * Runtime: 2 ms
 * Memory Usage: 42.4 MB 
 */
class Solution {
    public int maxPoolingKernel(int[][] grid, int x, int y) {   
        int mx = 0;
        for (int i = x; i < x + 3; ++ i) {
            for (int j = y; j < y + 3; ++ j) {
                mx = Math.max(mx, grid[i][j]);
            }
        }
        return mx;
    }
    public int[][] largestLocal(int[][] grid) {
        int n = grid.length;
        int[][] ans = new int[n - 2][n - 2];
        for (int i = 0; i < n - 2; ++ i) {
            for (int j = 0; j < n - 2; ++ j) {
                ans[i][j] = maxPoolingKernel(grid, i, j);
            }
        }
        return ans;
    }
}
