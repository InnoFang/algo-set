/**
 * Created by Inno Fang on 2018/2/23.
 */


/**
 * 481 / 481 test cases passed.
 * Status: Accepted
 * Runtime: 308 ms
 */
class Solution {
    fun reverseVowels(s: String): String {
        val vowels = hashSetOf('a', 'i', 'u', 'e', 'o', 'A', 'I', 'U', 'E', 'O')
        val chars = s.toCharArray()
        var lo = 0 ; var hi = chars.lastIndex
        while (lo < hi) {
            while (lo < hi && !vowels.contains(chars[lo])) lo++
            while (lo < hi && !vowels.contains(chars[hi])) hi--
            (chars[lo] to chars[hi]).let { chars[hi--] = it.first; chars[lo++] = it.second }
        }
        return String(chars)
    }
}

class Solution2 {
    fun reverseVowels(s: String): String {
        val chars = s.toCharArray()
        var i = 0
        var j = s.lastIndex
        while (i < j) {
            when {
                !chars[i].isVowel() -> i++
                !chars[j].isVowel() -> j--
                else -> {
                    chars.swap(i, j)
                    i++
                    j--
                }
            }
        }

        return chars.joinToString("")
    }

    /**
     * **Mutating** - Swap the elements at indices [i] and [j].
     */
    fun CharArray.swap(i: Int, j: Int) {
        val temp = this[i]
        this[i] = this[j]
        this[j] = temp
    }

    /**
     * Checks whether the Char is a vowel.
     * Note: The set of vowels **does not include y** here.
     */
    fun Char.isVowel(): Boolean = toLowerCase() in "aeiou"
}

fun main(args: Array<String>) {
    Solution().reverseVowels("hello").let(::println)    // holle
    Solution().reverseVowels("leetcode").let(::println) // leotcede
    Solution().reverseVowels("aA").let(::println) // Aa
}

fun test(vararg args: Any) {
    print("test: ")
    args.forEachIndexed { idx, any ->  print("[$idx]: $any ,") }
    println()
}