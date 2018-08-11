/**
 * Created by Inno Fang on 2017/12/11.
 */

/**
 * 476 / 476 test cases passed.
 * Status: Accepted
 * Runtime: 352 ms
 */
class Solution {
    fun reverseString(s: String): String {
        return s.reversed()
    }
}

/**
 * 476 / 476 test cases passed.
 * Status: Accepted
 * Runtime: 445 ms
 */
class Solution2 {
    fun reverseString(s: String): String {
        val len = s.length - 1
        val seq = s.toCharArray()
        ((len shr 1) downTo  0).forEach {
            val tmpChar = seq[it]
            seq[it] = seq[len - it]
            seq[len - it] = tmpChar
        }
        return String(seq)
    }
}