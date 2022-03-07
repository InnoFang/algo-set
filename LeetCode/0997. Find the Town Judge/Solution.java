/**
 * 92 / 92 test cases passed.
 * Runtime: 2 ms
 * Memory Usage: 48.6 MB 
 */
class Solution {
    public int findJudge(int n, int[][] trust) {
        int[] degree = new int[n + 1];
        for (int i = 0; i < trust.length; ++ i) {
            degree[trust[i][0]] -= 1;
            degree[trust[i][1]] += 1;
        }
        for (int i = 1; i < degree.length; ++ i) {
            if (degree[i] == n - 1) {
                return i;
            }
        }
        return -1;
    }
}
