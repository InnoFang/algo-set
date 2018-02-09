/**
 * Created by Inno Fang on 2018/2/9.
 */


/**
 * 23 / 23 test cases passed.
 * Status: Accepted
 * Runtime: 458 ms
 */
class Solution {
    fun containsNearbyDuplicate(nums: IntArray, k: Int): Boolean {
        val kRange = HashSet<Int>()
        nums.forEachIndexed { index, num ->
            if (kRange.contains(num)) return true
            kRange.add(num)
            if (kRange.size == k + 1) kRange.remove(nums[index - k])
        }
        return false
    }
}
