package io.innofang.kotlin.string

/**
 * Created by Inno Fang on 2018/3/16.
 */
class KMP
constructor(private var pattern: CharArray) {

    private lateinit var next: IntArray

    init {
        resetPattern(pattern)
    }


    constructor(pattern: String) : this(pattern.toCharArray()) {
        resetPattern(pattern)
    }

    fun resetPattern(pattern: String) = resetPattern(pattern.toCharArray())


    fun resetPattern(pattern: CharArray) {
        this.pattern = pattern
        next = generateNext(pattern.size)
    }

    fun matches(text: String): Boolean = matches(text.toCharArray())


    fun matches(text: CharArray): Boolean = find(text) >= 0


    fun find(text: String): Int = find(text.toCharArray())


    fun find(text: CharArray): Int {
        var t = 0
        var p = 0
        while (t < text.size && p < pattern.size) {
            when {
                text[t] == pattern[p] -> {
                    t++
                    p++
                }
                p != 0 -> p = next[p - 1]
                else -> t++
            }
        }
        return if (p == pattern.size) t - p else -1
    }

    private fun generateNext(length: Int): IntArray {
        val tmp = IntArray(length)
        var idx = 0
        tmp[idx] = 0
        var i = 1
        while (i < length) {
            when {
                pattern[idx] == pattern[i] -> tmp[i++] = idx++ + 1
                idx == 0 -> tmp[i++] = 0
                else -> idx = tmp[idx - 1]
            }
        }
        return tmp
    }
}
