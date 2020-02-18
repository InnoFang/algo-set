import java.util.LinkedList

data class Graph(val vertexNum: Int, val edgeNum: Int, val arcs: Array<IntArray>)


fun bfs(graph: Graph, visited: Array<Boolean>, v: Int) {
    visited[v] = true;
    val que = LinkedList<Int>()
    que.push(v)
    while (que.isNotEmpty()) {
        val node = que.poll()
        print("$node ")
        for (i in 0 until graph.vertexNum) {
            if (graph.arcs[v][i] == 1 && !visited[i]) {
                visited[i] = true;
                que.add(i)
            }
        }
    }
}

fun bfsTraversal (graph: Graph) {
    val visited = Array<Boolean>(graph.vertexNum, { false })
    for (i in 0 until graph.vertexNum) {
        if (!visited[i]) {
            bfs(graph, visited, i)
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
    bfsTraversal(graph)
}
