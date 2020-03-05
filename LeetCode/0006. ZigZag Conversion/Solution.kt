/**
 * Created by Inno Fang on 2018/3/10.
 */

/**
 * 1158 / 1158 test cases passed.
 * Status: Accepted
 * Runtime: 468 ms
 */
class Solution {
    fun convert(s: String, numRows: Int): String {
        val len = s.length
        if (len == 0 || len <= numRows || numRows == 1) return s
        val res = StringBuilder()
        for (i in 0 until numRows) {
            var idx = i
            res.append(s[idx])
            while (idx < len) {
                if (i != numRows - 1) {
                    idx += 2 * numRows - 2 - 2 * i
                    if (idx < len) res.append(s[idx])
                }

                if (i != 0) {
                    idx += 2 * i
                    if (idx < len) res.append(s[idx])
                }
            }
        }
        return res.toString()
    }
}

fun main(args: Array<String>) {
    testCase(Solution().convert("PAYPALISHIRING", 3), "PAHNAPLSIIGYIR").let(::println)
    testCase(Solution().convert("A", 1), "A").let(::println)
    testCase(Solution().convert("AB", 1), "AB").let(::println)
}

fun testCase(res: String, ans: String) = res == ans