/**
 * 205 / 205 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 41.4 MB 
 */
class Solution {
    public int findLongestChain(int[][] pairs) {
        int prev = Integer.MIN_VALUE, ans = 0;
        Arrays.sort(pairs, (a, b) -> a[1] - b[1]);
        for (int[] p: pairs) {
            if (p[0] > prev) {
                prev = p[1];
                ++ ans;
            }
        }
        return ans;
    }
}
