/**
 * Created by Inno Fang on 2018/3/13.
 */

/**
 * 68 / 68 test cases passed.
 * Status: Accepted
 * Runtime: 328 ms
 */
class Solution {
    fun longestConsecutive(nums: IntArray): Int {

        val uf = UnionFind(nums)
        val store = HashMap<Int, Int>()
        nums.forEach { i ->
            if (!store.containsKey(i)) {
                store[i] = i
                store[i + 1]?.let { uf.union(i, it) }
                store[i - 1]?.let { uf.union(i, it) }
            }
        }
        return uf.max()
    }

    class UnionFind(array: IntArray) {
        val map = HashMap<Int, Int>()

        init {
            array.forEach { map[it] = it }
        }

        private fun find(idx: Int): Int {
            if (idx != map[idx]) map[idx] = find(map[idx]!!)
            return map[idx]!!
        }

        fun isConnected(p: Int, q: Int): Boolean = find(p) == find(q)

        fun union(p: Int, q: Int) {
            val i = find(p)
            val j = find(q)
            map[i] = j
        }

        fun max(): Int = map.map { it.value }.groupBy(this::find).map { it.value.size }.max() ?: 0
    }
}

fun main(args: Array<String>) {
    Solution().longestConsecutive(intArrayOf(100, 4, 200, 1, 3, 2)).let(::println)
    Solution().longestConsecutive(intArrayOf(0, -1)).let(::println)
    Solution().longestConsecutive(intArrayOf(1, 3, 5, 2, 4)).let(::println)
}