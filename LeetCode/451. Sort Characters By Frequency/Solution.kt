/**
 * Created by Inno Fang on 2018/3/28.
 */

/**
 * 35 / 35 test cases passed.
 * Status: Accepted
 * Runtime: 512 ms
 */
class Solution {
    fun frequencySort(s: String): String {
        return s.groupBy { it }
                .map { it.key to it.value.size }
                .toList()
                .sortedWith(Comparator { o1, o2 ->
                    if (o1.second == o2.second) o1.first - o2.first
                    else o2.second - o1.second
                }).joinToString("") { "${it.first}".repeat(it.second) }
    }
}

fun main(args: Array<String>) {
    Solution().frequencySort("Aabb").let(::println)
    Solution().frequencySort("cccaaa").let(::println)
    Solution().frequencySort("tree").let(::println)
}