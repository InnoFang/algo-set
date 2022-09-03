/**
 * 205 / 205 test cases passed.
 * Runtime: 244 ms
 * Memory Usage: 44.2 MB 
 */
class Solution {
    fun findLongestChain(pairs: Array<IntArray>): Int {
        var prev = Int.MIN_VALUE
        var ans = 0
        pairs.apply {
            sortBy { it[1] }
            forEach {
                if (it[0] > prev) {
                    prev = it[1]
                    ++ ans
                }
            }
        }
        return ans
    }
}
