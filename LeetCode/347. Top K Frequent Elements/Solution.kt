/**
 * Created by Inno Fang on 2018/2/28.
 */

/**
 * 20 / 20 test cases passed.
 * Status: Accepted
 * Runtime: 532 ms
 */
class Solution {

    class Obj(val v: Int, val freq: Int) : Comparable<Obj> {
        override fun compareTo(other: Obj) = if (this.freq != other.freq) other.freq - this.freq else other.v - this.v
    }

    fun topKFrequent(nums: IntArray, k: Int): List<Int> {
        val store = nums.groupBy { it }.map { Obj(it.key, it.value.size) }
        val que = java.util.PriorityQueue<Obj>()
        store.forEach { que.offer(it) }
        val res = mutableListOf<Int>()
        (1..minOf(que.size, k)).forEach { res.add(que.poll().v) }
        return res
    }
}

fun main(args: Array<String>) {
    Solution().topKFrequent(intArrayOf(1, 1, 1, 2, 2, 3), 2).forEach { print("$it ") }; println()
}