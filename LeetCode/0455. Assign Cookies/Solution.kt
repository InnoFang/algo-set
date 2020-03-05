/**
 * Created by Inno Fang on 2018/1/31. 
 */

/**
 * 21 / 21 test cases passed.
 * Status: Accepted
 * Runtime: 623 ms
 */
class Solution {
    fun findContentChildren(g: IntArray, s: IntArray): Int {
        g.sortDescending()
        s.sortDescending()
        var gi = 0
        var si = 0
        var res = 0
        while (gi < g.size && si < s.size) {
            if (s[si] >= g[gi]) {
                gi++
                si++
                res++
            } else gi++
        }
        return res
    }
}

fun main(args: Array<String>) {
    Solution().findContentChildren(intArrayOf(1, 2, 3), intArrayOf(2, 3)).let(::println)
    Solution().findContentChildren(intArrayOf(1, 2, 3), intArrayOf(1, 1)).let(::println)
}