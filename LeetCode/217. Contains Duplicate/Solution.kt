/**
 * 18 / 18 test cases passed.
 * Status: Accepted
 * Runtime: 496 ms
 */
class Solution {
    fun containsDuplicate(nums: IntArray): Boolean {
        return nums.toHashSet().size < nums.size
    }
}