/**
 * Created by Inno Fang on 2018/2/9.
 */


/**
 * 18 / 18 test cases passed.
 * Status: Accepted18 / 18 test cases passed.
 * Runtime: 496 ms
 */
class Solution {
    fun containsDuplicate(nums: IntArray): Boolean {
        return nums.toHashSet().size < nums.size
    }
}