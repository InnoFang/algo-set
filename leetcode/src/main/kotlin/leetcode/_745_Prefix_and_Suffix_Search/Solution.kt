package leetcode._745_Prefix_and_Suffix_Search

import java.util.HashMap


/**
 * Created by Inno Fang on 2017/12/13.
 */

class WordFilter(words: Array<String>) {
    var map = HashMap<String, Int>()

    init {
        for (w in words.indices) {
            var i = 0
            while (i <= 10 && i <= words[w].length) {
                var j = 0
                while (j <= 10 && j <= words[w].length) {
                    map.put(words[w].substring(0, i) + "#" + words[w].substring(words[w].length - j), w)
                    j++
                }
                i++
            }
        }
    }

    fun f(prefix: String, suffix: String): Int {
        return map.getOrDefault(prefix + "#" + suffix, -1)
    }
}

// TLE
class WordFilter1(words: Array<String>) {

    val array by lazy { words }

    fun f(prefix: String, suffix: String): Int {
        (array.size - 1 downTo 0).forEach {
            if (array[it].startsWith(prefix) && array[it].endsWith(suffix)) return it
        }
        return -1
    }
}

class WordFilter2(words: Array<String>) {

    val map: HashMap<String, Int> = HashMap()

    init {
        words.forEachIndexed { index, s ->
            val size = s.length
            (0..size).takeWhile { it <= 10 }.forEach { j ->
                val prefix = s.substring(0, j)
                (0..size).takeWhile { it <= 10 }.forEach { k ->
                    val suffix = s.substring(size - k)
                    map["$prefix#$suffix"] = index
                }
            }
        }
    }

    fun f(prefix: String, suffix: String): Int {
        return map.getOrDefault("$prefix#$suffix", -1)
    }
}

/**
 * Your WordFilter object will be instantiated and called as such:
 * var obj = WordFilter(words)
 * var param_1 = obj.f(prefix,suffix)
 */

fun main(vararg args: String) {
    val arr = arrayOf("apple", "aoe", "aoe", "aoe", "aoe", "bbb")
    var obj = WordFilter2(arr)
    obj.f("a", "e").let(::println)
}

/**
["WordFilter","f","f","f","f","f","f","f","f","f","f","f","f","f","f","f","f","f","f","f","f","f","f","f","f","f","f","f","f","f","f","f","f"]
[[["pop"]],["",""],["","p"],["","op"],["","pop"],["p",""],["p","p"],["p","op"],["p","pop"],["po",""],["po","p"],["po","op"],["po","pop"],["pop",""],["pop","p"],["pop","op"],["pop","pop"],["",""],["","p"],["","gp"],["","pgp"],["p",""],["p","p"],["p","gp"],["p","pgp"],["pg",""],["pg","p"],["pg","gp"],["pg","pgp"],["pgp",""],["pgp","p"],["pgp","gp"],["pgp","pgp"]]
 */

//Output:
//[null,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,-1,-1,-1,-1,0,-1,-1,-1,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1]

//Expected:
//[null,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,-1,0,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1]

