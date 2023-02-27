/**
 * Runtime: 3 ms
 * Memory Usage: 42 MB 
 */
class Solution {
    public int[] leftRigthDifference(int[] nums) {
        int rightSum = Arrays.stream(nums).sum();
        int leftSum = 0;
        for (int i = 0; i < nums.length; ++ i) {
            int num = nums[i];
            rightSum -= num;
            nums[i] = Math.abs(leftSum - rightSum);
            leftSum += num;
        }
        return nums;
    }
}
