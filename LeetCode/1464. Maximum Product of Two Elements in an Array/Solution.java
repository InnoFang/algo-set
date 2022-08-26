/**
 * 104 / 104 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 41.2 MB 
 */
class Solution {
    public int maxProduct(int[] nums) {
        int first = 0, second = 1;
        if (nums[first] < nums[second]) {
            int temp = first;
            first = second;
            second = temp;
        }
        for (int i = 2; i < nums.length; ++ i) {
            if (nums[i] > nums[first]) {
                second = first;
                first = i;
            } else if (nums[i] > nums[second]) {
                second = i;
            }
        }
        return (nums[first] - 1) * (nums[second] - 1);
    }
}
