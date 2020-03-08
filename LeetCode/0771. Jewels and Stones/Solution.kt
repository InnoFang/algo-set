class Solution {
    fun numJewelsInStones(J: String, S: String): Int {
        return S.count { J.contains(it) }
    }
}

fun main(args: Array<String>) {
    Solution().numJewelsInStones("aA", "aAAbbbb").let(::println)
    Solution().numJewelsInStones("z", "ZZ").let(::println)
}
