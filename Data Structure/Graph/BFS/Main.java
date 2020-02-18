import java.util.Queue;
import java.util.LinkedList;

class Graph {
    int vertexNum;
    int edgeNum;
    int[][] arcs;
    public Graph(int vertexNum, int edgeNum, int[][] arcs) {
        this.vertexNum = vertexNum;
        this.edgeNum = edgeNum;
        this.arcs = arcs;
    }
}


public class Main {

    public static void bfs(Graph graph, Boolean[] visited, int vertex) {
        visited[vertex] = Boolean.TRUE;
        Queue<Integer> que = new LinkedList<>();
        que.add(vertex);
        while (!que.isEmpty()) {
            Integer node = que.poll();
            System.out.print(node + " ");
            for (int i = 0; i < graph.vertexNum; ++i) {
                if (graph.arcs[vertex][i] == 1 && !visited[i]) {
                    visited[i] = true;
                    que.add(i);
                }
            }
        }
    }

    public static void bfsTraversal(Graph graph) {
        Boolean[] visited = new Boolean[graph.vertexNum];
        for (int i = 0; i < graph.vertexNum; ++i) {
            visited[i] = Boolean.FALSE;
        }
        for (int i = 0; i < graph.vertexNum; ++i) {
            if (visited[i] == Boolean.FALSE) {
                bfs(graph, visited, i);
            }
        }
    }

    public static void main(String[] args) {
        int vertexNum = 5;
        int edgeNum = 7;
        int[][] adjMat = {
            {0,1,1,0,1},
            {1,0,0,1,1},
            {1,0,0,1,0},
            {0,1,1,0,1},
            {1,1,0,1,0}
        };
        Graph graph = new Graph(vertexNum, edgeNum, adjMat);
        bfsTraversal(graph);
    }
}