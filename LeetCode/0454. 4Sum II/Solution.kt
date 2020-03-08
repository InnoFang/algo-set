/**
 * 48 / 48 test cases passed.
 * Status: Accepted
 * Runtime: 888 ms
 */
class Solution {
    fun fourSumCount(A: IntArray, B: IntArray, C: IntArray, D: IntArray): Int {
        val store = HashMap<Int, Int>()
        C.forEach { i ->
            D.forEach { j ->
                // val v = store[i + j]
                // if (v == null) store[i + j] = 1 else store[i + j] = v + 1
                store[i + j] = (store[i + j] ?: 0) + 1
            }
        }
        var res = 0
        A.forEach { i ->
            B.forEach { j ->
                // res += store.getOrDefault(0 - i - j, 0)
                store[0 - i - j]?.let { res += it }
            }
        }
        return res
    }
}

/**
 * 48 / 48 test cases passed.
 * Status: Accepted
 * Runtime: 936 ms
 */
class Solution2 {
    fun fourSumCount(A: IntArray, B: IntArray, C: IntArray, D: IntArray): Int {
        val store = HashMap<Int, Int>()
        var res = 0
        dualForEach(C, D, { i, j -> store[i + j] = (store[i + j] ?: 0) + 1 })
        dualForEach(A, B, { i, j -> store[0 - i - j]?.let { res += it } })
        return res
    }

    private inline fun dualForEach(a: IntArray, b: IntArray, forEachDo: (i: Int, j: Int) -> Unit)
            : Unit = a.forEach { i -> b.forEach { j -> forEachDo(i, j) } }
}

fun main(args: Array<String>) {
    Solution2().fourSumCount(intArrayOf(1, 2), intArrayOf(-2, -1), intArrayOf(-1, 2), intArrayOf(0, 2)).let(::println)
}
