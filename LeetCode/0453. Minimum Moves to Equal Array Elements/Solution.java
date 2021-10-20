/**
 * 84 / 84 test cases passed.
 * Runtime: 7 ms
 * Memory Usage: 38.7 MB 
 */
class Solution {
    public int minMoves(int[] nums) {
        int sum = Arrays.stream(nums).sum();
        int min = Arrays.stream(nums).min().getAsInt();
        return sum - nums.length * min;
    }
}
