package io.innofang

/**
 * Created by Inno Fang on 2018/2/14.
 */

/**
 * 71 / 71 test cases passed.
 * Status: Accepted
 * Runtime: 387 ms
 */
class Solution {
    fun compareVersion(version1: String, version2: String): Int {
        val ver1 = version1.split(".").map { it.toInt() }.toIntArray()
        val ver2 = version2.split(".").map { it.toInt() }.toIntArray()
        (0..maxOf(ver1.size, ver2.size)).forEach {
            val v1 = ver1.getOrElse(it, { 0 })
            val v2 = ver2.getOrElse(it, { 0 })
            (v1.compareTo(v2)).let { if (it != 0) return it }
        }
        return 0
    }
}

fun main(args: Array<String>) {
    Solution().compareVersion("0.1", "1.1").let(::println)
    Solution().compareVersion("1.2", "1.1").let(::println)
    Solution().compareVersion("1", "1").let(::println)
    Solution().compareVersion("1", "2").let(::println)
    Solution().compareVersion("1", "1.2").let(::println)
    Solution().compareVersion("0.1", "0.0.1").let(::println)
    Solution().compareVersion("0.0", "0.0.0.0").let(::println)
}