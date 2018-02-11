/**
 * Created by Inno Fang on 2018/2/11.
 */

/**
 * 19 / 19 test cases passed.
 * Status: Accepted
 * Runtime: 43 ms
 */
public class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] results = new int[2];
        boolean find = false;
        for (int i = 0; i < nums.length - 1; i++) {
            for (int j = i + 1; j <= nums.length - 1; j++) {
                if (nums[i] + nums[j] == target) {
                    results[0] = i;
                    results[1] = j;
                    find = true;
                    break;
                }
            }
            if (find)
                break;
        }
        return results;
    }
}