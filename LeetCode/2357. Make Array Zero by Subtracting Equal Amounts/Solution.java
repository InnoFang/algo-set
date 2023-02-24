/**
 * Runtime: 1 ms
 * Memory Usage: 39 MB 
 */
class Solution {
    public int minimumOperations(int[] nums) {
        HashSet<Integer> rec = new HashSet<>();
        for (int num: nums) rec.add(num);
        return rec.contains(0) ? rec.size() - 1 : rec.size();
    }
}
