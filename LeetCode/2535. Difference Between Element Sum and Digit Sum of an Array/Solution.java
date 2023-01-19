/**
 * Runtime: 2 ms
 * Memory Usage: 41.6 MB 
 */
class Solution {
    public int differenceOfSum(int[] nums) {
        int a = 0, b = 0;
        for (int num: nums) {
            a += num;
            while (num > 0) {
                b += num % 10;
                num /= 10;
            }
        }
        return Math.abs(a - b);
    }
}
