/**
 * Created by Inno Fang on 2017/12/31.
 */
class Solution {

    private val res = ArrayList<String>()
    private val map = hashMapOf(
            '0' to "",
            '1' to "",
            '2' to "abc",
            '3' to "def",
            '4' to "ghi",
            '5' to "jkl",
            '6' to "mno",
            '7' to "pqrs",
            '8' to "tuv",
            '9' to "wxyz")

    fun letterCombinations(digits: String): List<String> {
        if ("" == digits) return res
        tryCombinations(digits, 0, "")
        return res
    }

    private fun tryCombinations(digits: String, index: Int, s: String) {
        if (digits.length == index) {
            res.add(s)
            return
        }
        map[digits[index]]?.forEachIndexed { _, c ->
            tryCombinations(digits, index + 1, s + c)
        }
    }
}

class Solution2 {
    fun letterCombinations(digits: String): List<String> {
        if (digits.isEmpty()) return emptyList()
        val letters = mapOf('2' to "abc", '3' to "def", '4' to "hgi", '5' to "jkl", '6' to "mno", '7' to "pqrs", '8' to "tuv", '9' to "wxyz")
        return digits.fold(listOf("")) { acc, c -> acc.flatMap { o -> letters[c]?.map { o + it }.orEmpty() } }
    }
}

fun main(args: Array<String>) {
    Solution().letterCombinations("10").forEach { print("$it ") }
    println()
    Solution2().letterCombinations("23").forEach { print("$it ") }
    println()
}

// 93  Restore IP Address
// 131 Palindrome Partitioning