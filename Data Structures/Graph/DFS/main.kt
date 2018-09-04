data class Graph(val vertexNum: Int, val edgeNum: Int, val arcs: Array<IntArray>)

fun dfs(graph: Graph, visited: Array<Boolean>, v: Int) {
    visited[v] = true;
    print("$v ")
    for (i in 0 until graph.vertexNum) {
        if (graph.arcs[v][i] == 1 && !visited[i]) {
            dfs(graph, visited, i)
        }
    }
}

fun dfsTraversal (graph: Graph) {
    val visited = Array<Boolean>(graph.vertexNum, { false })
    for (i in 0 until graph.vertexNum) {
        if (!visited[i]) {
            dfs(graph, visited, i)
        }
    }
}

fun main(args: Array<String>) {
    val vertexNum = 5
    val edgeNum = 7
    val adjMat = arrayOf(
        intArrayOf(0,1,1,0,1),
        intArrayOf(1,0,0,1,1),
        intArrayOf(1,0,0,1,0),
        intArrayOf(0,1,1,0,1),
        intArrayOf(1,1,0,1,0)
    )
    val graph = Graph(vertexNum, edgeNum, adjMat)
    dfsTraversal(graph)
}