import java.util.Stack; 

public class Main {
    private static Integer INF = 0x6fffffff;

    public static Integer choose(Integer[] distance, Boolean[] found) {
        Integer min = INF;
        Integer minPos = -1;
        for (int i = 0; i < distance.length; ++i) {
            if (distance[i] < min && !found[i]) {
                min = distance[i];
                minPos = i;
            }
        }
        return minPos;
    }

    public static void shortestPath(Integer src, Integer[][] adjMat, Integer[] distance, Boolean[] found, Integer[] path) {
        int vertexNum = adjMat.length;
        for (int i = 0; i < vertexNum; ++i) {
            found[i] = Boolean.FALSE;
            path[i] = src;
            distance[i] = adjMat[src][i];
        }

        found[src] = Boolean.TRUE;
        distance[src] = 0;
        for (int i = 0; i < vertexNum - 2; ++i) {
            Integer dest = choose(distance, found);
            found[dest] = Boolean.TRUE;
            for (int j = 0; j < vertexNum; ++j) {
                if (!found[j]) {
                    if (distance[dest] + adjMat[dest][j] < distance[j]) {
                        distance[j] = distance[dest] + adjMat[dest][j];
                        path[j] = dest;
                    }
                }
            }
        }
    }

    public static void searchPath(Integer[] path, Integer[] distance, Integer src, Integer dest) {
        System.out.println("Weight: " + distance[dest]);

        Stack<Integer> pathStack = new Stack<>();
        pathStack.add(dest);
        Integer p = path[dest];
        while (p != src) {
            pathStack.add(p);
            p = path[p];
        }
        System.out.print("Path:   " + src);
        while (!pathStack.isEmpty()) {
            System.out.print(" -> " + pathStack.pop());
        }
        System.out.println();
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
        Integer[] distance = new Integer[vertexNum];
        Integer[] path = new Integer[vertexNum];
        Boolean[] found = new Boolean[vertexNum];

        shortestPath(src, adjMat, distance, found, path);
        searchPath(path, distance, src, dest);
    }
}