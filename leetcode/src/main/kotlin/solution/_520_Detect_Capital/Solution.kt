package solution._520_Detect_Capital

/**
 * Created by Inno Fang on 2017/12/30.
 */
class Solution {
    fun detectCapitalUse(word: String): Boolean {
        return when (word) {
            word.toUpperCase() -> true
            word.toLowerCase() -> true
            else -> {
                val first = word[0].toString()
                if (word.length > 1 && first == first.toUpperCase()) {
                    val last = word.substring(1)
                    if (last == last.toLowerCase()) return true
                }
                return false
            }
        }
    }
}

class Solution2 {
    fun detectCapitalUse(word: String): Boolean {
        if (word.equals(word.toUpperCase())) return true
        if (word.equals(word.toLowerCase())) return true
        val first = word[0].toString()
        if (first.equals(first.toUpperCase())) {
            if (word.length > 1) {
                val last = word.substring(1)
                if (last.equals(last.toLowerCase())) return true
            }
        }
        return false
    }
}

fun main(args: Array<String>) {
    Solution().detectCapitalUse("USA").let(::println)
    Solution().detectCapitalUse("solution").let(::println)
    Solution().detectCapitalUse("Google").let(::println)
    Solution().detectCapitalUse("FlaG").let(::println)
    Solution().detectCapitalUse("FLAG").let(::println)
}