/**
 * 28 / 28 test cases passed.
 * Status: Accepted
 * Runtime: 5 ms
 */
class Solution {
    public List<String> summaryRanges(int[] nums) {
        List<String> ans = new ArrayList<>();
        for (int low = 0, high = 0; high < nums.length; ++ high) {
            if (high + 1 == nums.length || nums[high] + 1 != nums[high + 1]) {
                StringBuilder sb = new StringBuilder(nums[low] + "");
                if (low != high) {
                    sb.append("->").append(nums[high]);
                }
                ans.add(sb.toString());
                low = high + 1;
            }
        }
        return ans;
    }
}
