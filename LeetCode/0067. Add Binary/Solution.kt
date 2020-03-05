/**
 * Created by Inno Fang on 2018/2/17.
 */

class Solution {
    fun addBinary(a: String, b: String): String {
        var i = a.lastIndex; var j = b.lastIndex; var c = 0
        val res = StringBuilder()
        while (i >= 0 || j >= 0 || c == 1) {
            c += if (i >= 0) a[i--] - '0' else 0
            c += if (j >= 0) b[j--] - '0' else 0
            res.insert(0, (c % 2))
            c /= 2
        }
        return res.toString()
    }
}

fun main(args: Array<String>) {
    Solution().addBinary("11", "1").let(::println)
    Solution().addBinary("0", "0").let(::println)
}