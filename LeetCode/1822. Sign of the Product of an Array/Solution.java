/**
 * Runtime: 0 ms
 * Memory Usage: 40.9 MB 
 */
class Solution {
    public int arraySign(int[] nums) {
        int sign = 1;
        for (int num: nums) {
            if (num == 0) return 0;
            if (num < 0) sign *= -1;
        }
        return sign;
    }
}
