/**
 * 32 / 32 test cases passed.
 * Runtime: 1 ms
 * Memory Usage: 38.6 MB 
 */
class Solution {
    public int[] singleNumber(int[] nums) {
        long xorsum = 0;
        for (int num: nums) {
            xorsum ^= num;
        }        
        int[] ans = {0, 0};
        long mask = (xorsum) & (-xorsum);
        for (int num: nums) {
            if ((num & mask) == 0) {
                ans[0] ^= num;
            } else {
                ans[1] ^= num;
            }
        }
        return ans;
    }
}
