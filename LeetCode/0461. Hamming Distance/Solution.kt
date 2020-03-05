/**
 * Created by Inno Fang on 2017/12/24.
 */
class Solution {
    fun hammingDistance(x: Int, y: Int): Int {
        var x = x
        var y = y
        if (x < y) {
            x += y
            y = x - y
            x -= y
        }
        var hammingDistance = 0
        while (x != 0) {
            var xb = x and 1
            var yb = y and 1
            if (xb != yb) hammingDistance++
            x = x ushr 1
            y = y ushr 1
        }
        return hammingDistance
    }
}

class Solution2 {
    fun hammingDistance(x: Int, y: Int): Int {
        var num = x xor y
        var result = 0
        while (num != 0) {
            if ((num and 1) == 1) result++
            num = num ushr 1
        }
        return result
    }
}

fun main(args: Array<String>) {
    Solution2().hammingDistance(1, 4).let(::println)
    Solution2().hammingDistance(0, 0).let(::println)
    Solution2().hammingDistance(0x7fffff, 0x7ffffff).let(::println)
    Solution2().hammingDistance(16, 4).let(::println)
    Solution2().hammingDistance(18, 6).let(::println)
    Solution2().hammingDistance(18, 7).let(::println)
    Solution2().hammingDistance(7, 3).let(::println)
}