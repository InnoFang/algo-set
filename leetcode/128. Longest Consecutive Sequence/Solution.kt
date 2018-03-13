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

/**
 * 68 / 68 test cases passed.
 * Status: Accepted
 * Runtime: 264 ms
 */
class Solution2 {

    val map = HashMap<Int, Int>()

    private fun find(idx: Int): Int {
       var i = idx
        while (map[i] != i) {
            map[i] = map[map[i]!!]!!
            i = map[i]!!
        }
        return i
    }

    fun longestConsecutive(nums: IntArray): Int {
        var res = 0
        nums.forEach { i ->
            if (!map.containsKey(i)) {
                map[i] = i
                map[i - 1]?.let { map[i] = find(i - 1) }
                map[i + 1]?.let { map[i + 1] = find(i) }
            }
        }
        nums.forEach { res = maxOf(res, it - find(it) + 1) }
        return res
    }
}

fun main(args: Array<String>) {
    Solution2().longestConsecutive(intArrayOf(100, 4, 200, 1, 3, 2)).let(::println)
    Solution2().longestConsecutive(intArrayOf(0, -1)).let(::println)
    Solution2().longestConsecutive(intArrayOf(1, 3, 5, 2, 4)).let(::println)
}