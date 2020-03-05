/**
 * Created by Inno Fang on 2018/2/7.
 */

/**
 * 15 / 15 test cases passed.
 * Status: Accepted
 * Runtime: 3 ms
 */
public class Solution {
    public int minSubArrayLen(int s, int[] nums) {
        int start = 0, end = 0, sum = 0;
        int min = Integer.MAX_VALUE;
        while (start < nums.length && end < nums.length) {
            while (sum < s && end < nums.length) {
                sum += nums[end++];
            }
            while (sum >= s && start < nums.length) {
                min = Math.min(min, end - start);
                sum -= nums[start++];
            }
        }
        return min == Integer.MAX_VALUE ? 0 : min;
    }
}
