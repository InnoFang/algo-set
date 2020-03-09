class Solution {
    fun customSortString(S: String, T: String): String {
        val letter = IntArray(26) { 26 }
        var priority = 1
        S.forEach { letter[it - 'a'] = priority++ }
        return T.toCharArray().sortedWith(Comparator { o1, o2 -> letter[o1 - 'a'] - letter[o2 - 'a']}).joinToString("")
    }
}

fun main(args: Array<String>) {
    Solution().customSortString("cba", "abcd").let(::println)
    Solution().customSortString("zkjcba", "abcdefgabcedgkjzkjzkjzkjzkjzabcabczkjzkjabcacbcacabz").let(::println)
}
