package io.innofang.kotlin

import io.innofang.java.string.KMP

/**
 * Created by Inno Fang on 2018/3/16.
 */

fun main(args: Array<String>) {
    val kmp = KMP("abcdabcy")

    val result = kmp.matches("abcxabcdabcdabcy")
    println(result)

    val index = kmp.find("abcxabcdabcdabcy")
    println(index)
}