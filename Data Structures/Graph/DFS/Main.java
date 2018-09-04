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

    private static void dfs(Graph graph, Boolean[] visited, int vertex) {
        visited[vertex] = Boolean.TRUE;
        System.out.print(vertex + " ");
        for (int i = 0; i < graph.vertexNum; ++i) {
            if (graph.arcs[vertex][i] == 1 && visited[i] == Boolean.FALSE) {
                dfs(graph, visited, i);
            }
        }
    }

    public static void dfsTraversal(Graph graph) {
        Boolean[] visited = new Boolean[graph.vertexNum];
        for (int i = 0; i < graph.vertexNum; ++i) {
            visited[i] = Boolean.FALSE;
        }
        for (int i = 0; i < graph.vertexNum; ++i) {
            if (visited[i] == Boolean.FALSE) {
                dfs(graph, visited, i);
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
        dfsTraversal(graph);
    }
}