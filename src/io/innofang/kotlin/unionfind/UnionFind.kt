package io.innofang.kotlin.unionfind

/**
 * Created by Inno Fang on 2018/3/7.
 */

class UnionFind(val count: Int) {
    var id: IntArray = IntArray(count) { it }

    public fun find(idx: Int): Int {
        assert(idx in 0..(count - 1))
        return this.id[idx]
    }

    public fun isConnected(idx1: Int, idx2: Int) = find(idx1) == find(idx2)

    public fun union(idx1: Int, idx2: Int) {
        val id1 = find(idx1)
        val id2 = find(idx2)

        if (id1 == id2) return

        for (i in 0 until count) {
            if (id[i] == id1)
                id[i] = id2
        }
    }
}