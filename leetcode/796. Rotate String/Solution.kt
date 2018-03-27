/**
 * Created by Inno Fang on 2018/3/27.
 */

/**
 * 44 / 44 test cases passed.
 * Status: Accepted
 * Runtime: 244 ms
 */
class Solution {
    fun rotateString(A: String, B: String): Boolean {
        return A.length == B.length && (A + A).contains(B)
    }
}

/**
 * 39 / 39 test cases passed.
 * Status: Accepted
 * Runtime: 224 ms
 */
class Solution2 {
    fun rotateString(A: String, B: String): Boolean {
        if (A.length != B.length) return false
        if (A.isEmpty()) return false
        val store = mutableListOf<Int>()
        A.forEachIndexed { idx, c ->
            if (c == B[0])
                store.add(idx)
        }
        if (store.isEmpty()) return false
        store.forEach { idx ->
            if ((A.substring(idx) + A.substring(0, idx)) == B) return true
        }
        return false
    }
}


fun main(args: Array<String>) {
    Solution().rotateString("aa", "a").let(::println)
}