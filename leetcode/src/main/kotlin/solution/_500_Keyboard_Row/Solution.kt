package solution._500_Keyboard_Row

/**
 * Created by Inno Fang on 2017/12/24.
 */
class Solution {
    fun findWords(words: Array<String>): Array<String> {
        val kr1 = hashSetOf('q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p')
        val kr2 = hashSetOf('a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l')
        val kr3 = hashSetOf('z', 'x', 'c', 'v', 'b', 'n', 'm')

        val result = ArrayList<String>()
        words.forEach {

            when {
                kr1.containsAll(it.toLowerCase().toHashSet()) ||
                        kr2.containsAll(it.toLowerCase().toHashSet()) ||
                        kr3.containsAll(it.toLowerCase().toHashSet()) -> result.add(it)
            }
        }
        return result.toTypedArray()
    }
}

class Solution2 {
    fun findWords(words: Array<String>): Array<String> {
        val kr1 = hashSetOf('q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p')
        val kr2 = hashSetOf('a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l')
        val kr3 = hashSetOf('z', 'x', 'c', 'v', 'b', 'n', 'm')

        return words.filter {
            if (kr1.contains(it[0].toLowerCase()) || kr2.contains(it[0].toLowerCase()) || kr3.contains(it[0].toLowerCase())) {
                val word = it.toLowerCase().toHashSet()
                (kr1.containsAll(word) || kr2.containsAll(word) || kr3.containsAll(word))
            } else false
        }.toTypedArray()
    }
}

fun main(args: Array<String>) {
    Solution2().findWords(arrayOf("Hello", "Alaska", "Dad", "Peace")).forEach { print("$it ") }
    println()
    Solution2().findWords(arrayOf("Error")).forEach { print("$it ") }
    println()
    Solution2().findWords(arrayOf("a", "b")).forEach { print("$it ") }

}