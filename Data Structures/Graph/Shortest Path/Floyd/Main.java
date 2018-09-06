public class Main {
    private static Integer INF = 0x6fffffff;

    public static void shortestPath(Integer[][] adjMat, Integer[][] distance, Integer[][] path) {
        int vertexNum = adjMat.length;

        for (int row = 0; row < vertexNum; ++row) {
            for (int col = 0; col < vertexNum; ++col) {
                distance[row][col] = adjMat[row][col];
                path[row][col] = col;
            }
        }

        for (int i = 0; i < vertexNum; ++i) {
            for (int row = 0; row < vertexNum; ++row) {
                for (int col = 0; col < vertexNum; ++col) {
                    Integer select = (distance[row][i] == INF || distance[i][col] == INF)
                                     ? INF : distance[row][i] + distance[i][col];
                    if (distance[row][col] > select) {
                        distance[row][col] = select;
                        path[row][col] = path[row][i];
                    }
                }
            }
        }
    }

    public static void searchPath(Integer[][] path, Integer[][] distance, Integer src, Integer dest) {
        System.out.println("Weight: " + distance[src][dest]);

        System.out.print("Path:   " + src);
        Integer p = path[src][dest];
        while (p != dest) {
            System.out.print(" -> " + p);
            p = path[p][dest];
        }
        System.out.println(" -> " + dest);
    }
    
    public static void main(String[] args) {
        Integer vertexNum = 7;
        Integer src = 0;
        Integer dest = 6;

        Integer [][] adjMat = {
            { 0,    12,   14,    16,  INF,  INF,  INF},
            { 12,    0,  INF,    7,    10,  INF,  INF},
            { 14,  INF,    0,    9,   INF,    8,  INF},
            { 16,    7,    9,    0,     6,    2,  INF},
            {INF,   10,  INF,    6,     0,    5,    3},
            {INF,  INF,    8,    2,     5,    0,    4},
            {INF,  INF,  INF,  INF,     3,    4,    0}
        };
        Integer[][] distance = new Integer[vertexNum][vertexNum];
        Integer[][] path = new Integer[vertexNum][vertexNum];

        shortestPath(adjMat, distance, path);
        searchPath(path, distance, src, dest);
    }
}