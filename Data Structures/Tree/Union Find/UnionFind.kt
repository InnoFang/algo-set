class UnionFind(private val count: Int) {
    private val parent: IntArray = IntArray(count) { it }
    private val rank: IntArray = IntArray(count) { 1 }

    public fun find(idx: Int): Int {
       assert(idx in 0..(count - 1))  
       if (idx != parent[idx])
           parent[idx] = find(parent[idx])
       return parent[idx]
    }

    public fun isConnected(idx1: Int, idx2: Int) = find(idx1) == find(idx2)

    public fun union(idx1: Int, idx2: Int) {
        val root1 = find(idx1)
        val root2 = find(idx2)

        if (root1 == root2) return

        when {
            rank[root1] < rank[root2] -> parent[root1] = root2
            rank[root1] > rank[root2] -> parent[root2] = root1
            else -> { // rank[root1] == rank[root2]
                parent[root1] = root2
                rank[root2] += 1
            }
        }
    }
} 