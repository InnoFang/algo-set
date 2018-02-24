/**
 * Created by Inno Fang on 2018/2/24.
 */

/**
 * 161 / 161 test cases passed.
 * Status: Accepted
 * Runtime: 288 ms
 *
 * 1 2 1 1 2 2 3 4 4 4
 *   ^     ^ ^
 *  cnt  pre i
 *
 * 1 2 3 1 2 2 3 4 4 4
 *     ^       ^
 *    cnt      i
 *            pre
 */
class Solution {
    fun removeDuplicates(nums: IntArray): Int {
        if (nums.isEmpty()) return 0
        var pre = 0 ; var cnt = 1
        nums.forEachIndexed { idx, i ->
            if (i != nums[pre]) {
                pre = idx
                nums[cnt++] = i
            }
        }
        return cnt
    }
}

fun main(args: Array<String>) {
    Solution().removeDuplicates(intArrayOf(1,1,2)).let(::println)
}