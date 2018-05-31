package io.innofang.kotlin

import io.innofang.kotlin.unionfind.UnionFind
import java.util.*

/**
 * Created by Inno Fang on 2018/3/7.
 */

fun testUnionFind(n: Int) {
    val unionFind = UnionFind(n)
    val rand = Random()
    val start = System.currentTimeMillis()
    for (i in 0 until n) {
        val a = rand.nextInt(n)
        val b = rand.nextInt(n)
        unionFind.union(a, b)
    }
    for (i in 0 until n) {
        val a = rand.nextInt(n)
        val b = rand.nextInt(n)
        unionFind.isConnected(a, b)
    }
    val end = System.currentTimeMillis()
    println("Union Find ${2*n} ops, use ${end - start}ms.")
}

fun main(args: Array<String>) {
    val n = 100000
    testUnionFind(n)
}