/**
 * 170 / 170 test cases passed.
 * Runtime: 7 ms
 * Memory Usage: 46.2 MB 
 */
class Solution {
    public int[][] merge(int[][] intervals) {
        Arrays.sort(intervals, (o1, o2) -> o1[0] - o2[0]);
        int[][] ans = new int[intervals.length][2];
        int top = 0;
        for (int[] interval: intervals) {
            if (top == 0 || ans[top - 1][1] < interval[0]) {
                ans[top] = interval;
                top++;
            } else {
                ans[top - 1][1] = Math.max(ans[top - 1][1], interval[1]);
            }
        }
        return Arrays.copyOf(ans, top);
    }
}
