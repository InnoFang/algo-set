/**
 * Created by Inno Fang on 2018/2/4.
 */
class Solution {
    /**
     * 21 / 21 test cases passed.
     * Status: Accepted
     * Runtime: 3 ms
     * @param nums
     */
    public void moveZeroes(int[] nums) {
        int k = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != 0) {
                if (k != 0) {
                    nums[i - k] = nums[i];
                    nums[i] = 0;
                }
            } else {
                k++;
            }
        }
    }

    public static void main(String[] args) {
        int[] arr = {0, 1, 0, 3, 12};
        new Solution().moveZeroes(arr);
        for (int anArr : arr) {
            System.out.print(anArr + " ");
        }
        System.out.println();
    }
}
