/**
 * Created by Inno Fang on 2018/2/11.
 */
class Solution {
    fun reachingPoints(sx: Int, sy: Int, tx: Int, ty: Int): Boolean {
        var tx = tx
        var ty = ty

        while (tx >= 1 && ty >= 1) {
            when {
                tx > ty -> tx -= ty
                tx < ty -> ty -= tx
                else -> return tx == sx && ty == sy
            }
            if (tx == sx && ty == sy) return true
        }
        return tx == sx && ty == sy
    }
}

fun main(args: Array<String>) {
    Solution().reachingPoints(1, 1, 3, 5).let(::println)
    Solution().reachingPoints(1, 1, 2, 2).let(::println)
    Solution().reachingPoints(1, 1, 1, 1).let(::println)
    Solution().reachingPoints(1, 1, 10000000, 10000000).let(::println)
    Solution().reachingPoints(1, 1, 10000000, 88888888).let(::println)
    Solution().reachingPoints(9, 5, 12, 8).let(::println)
    Solution().reachingPoints(3, 3, 12, 9).let(::println)
    Solution().reachingPoints(9, 10, 9, 19).let(::println)
}
