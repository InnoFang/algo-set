/**
 * Created by Inno Fang on 2018/3/28.
 */

/**
 * 39 / 39 test cases passed.
 * Status: Accepted
 * Runtime: 256 ms
 */
class Solution {

    private val store = IntArray(2002) { it }
    private val rank = IntArray(2002) { 1 }

    private fun find(p: Int): Int {
        if (p != store[p]) store[p] = find(store[p])
        return store[p]
    }

    private fun union(p: Int, q: Int): Boolean {
        val rootP = find(p)
        val rootQ = find(q)
        if (rootP == rootQ) return false
        if (rank[rootP] < rank[rootQ]) store[rootP] = rootQ
        else {
            store[rootQ] = rootP
            if (rank[rootQ] == rank[rootP]) rank[rootQ]++
        }
        return true
    }

    fun findRedundantConnection(edges: Array<IntArray>): IntArray {
        edges.forEach {
            if (!union(it[0], it[1])) {
                return it
            }
        }
        return IntArray(2)
    }
}

fun main(args: Array<String>) {
    Solution().findRedundantConnection(arrayOf(
            intArrayOf(1, 2),
            intArrayOf(2, 3),
            intArrayOf(3, 4),
            intArrayOf(1, 4),
            intArrayOf(1, 5)
    )).let { println("[${it[0]}, ${it[1]}]") }
}