/**
 * 209 / 209 test cases passed.
 * Runtime: 1 ms
 * Memory Usage: 50.4 MB 
 */
class Solution {
    public int maxSubArray(int[] nums) {
        int ans = nums[0], prev = 0;
        for (int i = 0; i < nums.length; ++ i) {
            int curr = Math.max(nums[i], prev + nums[i]);
            ans = Math.max(ans, curr);
            prev = curr;
        }
        return ans;
    }
}
