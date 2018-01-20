package solution._541_Reverse_String_II

import org.jetbrains.annotations.Mutable

/**
 * Created by Inno Fang on 2018/1/8.
 */
class Solution {
    fun reverseStr(s: String, k: Int): String {
        if (k == 1) return s
        val res = StringBuilder()
        (0 until s.length step 2 * k).forEach {
            if (it + k >= s.length)
                res.append(s.substring(it).reversed())
            if (it + k < s.length && it + 2 * k >= s.length)
                res.append(s.substring(it, it + k).reversed()).append(s.substring(it + k))
            if (it + k < s.length && it + 2 * k < s.length)
                res.append(s.substring(it, it + k).reversed()).append(s.substring(it + k, it + 2 * k))
        }
        return res.toString()
    }
}

class Solution2 {
    fun reverseStr(s: String, k: Int): String =
            StringBuilder().apply {
                (0..s.length step (2 * k)).forEach { i ->
                    val firstK = s.drop(i).take(k)
                    append(firstK)

                    val secondK = s.drop(i + k).take(k)
                    append(secondK)
                }
            }.toString()
}

fun main(args: Array<String>) {
    Solution2().reverseStr("abcdefg", 2).let(::println)
    Solution2().reverseStr("abcdefghij", 2).let(::println)
    Solution2().reverseStr("abc", 2).let(::println)
    Solution2().reverseStr("abc", 4).let(::println)
    Solution2().reverseStr("abcdefghijklmn", 1).let(::println)
}