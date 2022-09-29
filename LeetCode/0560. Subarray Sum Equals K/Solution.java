/**
 * 92 / 92 test cases passed.
 * Runtime: 35 ms
 * Memory Usage: 44.9 MB 
 */
class Solution {
    public int subarraySum(int[] nums, int k) {
        HashMap<Integer, Integer> rec = new HashMap<>();
        rec.put(0, 1);
        int ans = 0, psum = 0;
        for (Integer num : nums) {
            psum += num;
            if (rec.containsKey(psum - k)) {
                ans += rec.get(psum - k);
            }
            rec.put(psum, rec.getOrDefault(psum, 0) + 1);
        }
        return ans;
    }
}
