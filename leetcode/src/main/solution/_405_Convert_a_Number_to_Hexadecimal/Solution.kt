package solution._405_Convert_a_Number_to_Hexadecimal

/**
 * Created by Inno Fang on 2017/12/17.
 */
class Solution {
    fun toHex(num: Int): String {
        if (num == 0) return "0"
        val map = charArrayOf('0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f')
        val result = StringBuilder()
        var tmp = num
        while (tmp != 0) {
            result.append(map[tmp and 0xf])
            tmp = tmp ushr 4
        }
        return result.reversed().toString()
    }
}

class Solution2 {
    fun toHex(num: Int): String {
        return (0..7)
                .takeWhile { if ((num) >= 0) num >= it shl 4 else num <= it shl 4}
                .map { "0123456789abcdef"[(num ushr (it * 4)) and 0xf].toString() }
                .reduce { acc, s -> acc + s }
                .substringBeforeLast("0")
                .reversed()
    }
}

fun main(args: Array<String>) {
    val solution = Solution2()
    solution.toHex(26).let(::println)
    solution.toHex(-1).let(::println)
    solution.toHex(0).let(::println)
}
/*
 (0..15).map {
if (it < 10)
    print("'${it}',")
else
    print("'${(it-10+97).toChar()}',")
}
 */