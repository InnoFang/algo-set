/**
 * Created by Inno Fang on 2018/3/26.
 */

/**
 * 113 / 113 test cases passed.
 * Status: Accepted
 * Runtime: 448 ms
 */
class Solution {

    class UnionFind(var group: Int) {
        val list = IntArray(group) { it }
        val rank = IntArray(group) { 1 }
        fun find(x: Int): Int {
            if (x != list[x]) list[x] = find(list[x])
            return list[x]
        }

        fun union(x: Int, y: Int) {
            val fx = find(x)
            val fy = find(y)
            if (fx == fy) return
            when {
                rank[fx] < rank[fy] -> list[fx] = fy
                rank[fx] > rank[fy] -> list[fy] = fx
                else -> {
                    list[fx] = fy
                    rank[fx]++
                }
            }
            group--
        }
    }

    fun findCircleNum(M: Array<IntArray>): Int {
        val n = M.size
        val uf = UnionFind(n)
        for (i in (0 until n)) {
            for (j in (i + 1 until n)) {
                if (M[i][j] == 1) uf.union(i, j)
            }
        }
        return uf.group
    }
}

fun main(args: Array<String>) {
//    Solution().findCircleNum(arrayOf(intArrayOf(1, 1, 0), intArrayOf(1, 1, 0), intArrayOf(0, 0, 1))).let(::println)
    Solution().findCircleNum(arrayOf(intArrayOf(1, 1, 1), intArrayOf(1, 1, 1), intArrayOf(1, 1, 1))).let(::println)
}