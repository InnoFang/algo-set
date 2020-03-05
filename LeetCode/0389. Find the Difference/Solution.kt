package algorithm._389_Find_the_Difference

/**
 * Created by Inno Fang on 2018/1/5.
 */

// AC: 325ms
class Solution {
    fun findTheDifference(s: String, t: String): Char {
        val a = s.toCharArray().toMutableList()
        val b = t.toCharArray().toMutableList()
        return b.filter { !a.remove(it) }[0]
    }
}

class Solution2 {
    fun findTheDifference(s: String, t: String): Char {
        var charCodeS = 0
        var charCodeT = 0
        (0 until s.length).forEach { charCodeS += s[it].toInt() }
        (0 until t.length).forEach { charCodeT += t[it].toInt() }
        return (charCodeT - charCodeS).toChar()
    }
}

class Solution3 {
    fun findTheDifference(s: String, t: String): Char {
        var charCode = t[s.length]
        (0 until s.length).forEach {
            charCode -= s[it].toInt()
            charCode += t[it].toInt()
        }
        return charCode
    }
}

class Solution4 {
    fun findTheDifference(s: String, t: String): Char {
        return (s+t).toCharArray().fold(0){ acc, c -> acc xor c.toInt() }.toChar()
    }
}


fun main(args: Array<String>) {
    Solution4().findTheDifference("abcd", "abcde").let(::println)
    Solution4().findTheDifference("a", "aa").let(::println)
    Solution4().findTheDifference("aaaaaa", "aaaaaaa").let(::println)
}