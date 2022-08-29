/**
 * 53 / 53 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 41.5 MB 
 */
class Solution {
    public int[] shuffle(int[] nums, int n) {
        int[] ans = new int[nums.length];
        for (int i = 0, j = 0, half = nums.length >> 1; i < half; i++, j += 2) {
            ans[j] = nums[i];
            ans[j + 1] = nums[i + half];
        }
        return ans;
    }
}
