#include <iostream>
#include <vector> 

using namespace std;     

const int INF = 0x7ffffff; 

/*
    determine the distances from each vertex to every other vertex
    adjMat is the adjacency matrix
    distance is the matrix of distance
    path is the matrix of path
*/
void shortestPath(vector<vector<int>> adjMat, vector<vector<int>> &distance, vector<vector<int>> &path) {
    const int vertexNum = adjMat.size();
    for (int row = 0; row < vertexNum; ++row) {
        distance[row].resize(vertexNum);
        path[row].resize(vertexNum);
        for (int col = 0; col < vertexNum; ++col) {
            distance[row][col] = adjMat[row][col];
            path[row][col] = col;
        }
    }

    for (int i = 0; i < vertexNum; ++i) {
        for (int row = 0; row < vertexNum; ++row) {
            for (int col = 0; col < vertexNum; ++col) {
                int select = (distance[row][i] == INF || distance[i][col] == INF)
                            ? INF : distance[row][i] + distance[i][col];
                if (distance[row][col] > select) {
                    distance[row][col] = select;
                    path[row][col] = path[row][i];
                }
            }
        }
    }
}

void searchPath(vector<vector<int>> path, vector<vector<int>> distance, int src, int dest) {
    cout << "Weight: " << distance[src][dest] << endl;

    cout << "Path:   " << src;
    int p = path[src][dest];
    while (p != dest) {
        cout << " -> " << p;
        p = path[p][dest];
    }
    cout << " -> " << dest << endl;
}

int main() { 
    int vertexNum = 7;
    int src = 0;
    int dest = 6; 
    vector<vector<int>> adjMat = {
        { 0,    12,   14,    16,  INF,  INF,  INF},
        { 12,    0,  INF,    7,    10,  INF,  INF},
        { 14,  INF,    0,    9,   INF,    8,  INF},
        { 16,    7,    9,    0,     6,    2,  INF},
        {INF,   10,  INF,    6,     0,    5,    3},
        {INF,  INF,    8,    2,     5,    0,    4},
        {INF,  INF,  INF,  INF,     3,    4,    0}
    };
    vector<vector<int>> distance(vertexNum);
    vector<vector<int>> path(vertexNum);

    shortestPath(adjMat, distance, path);
    searchPath(path, distance, src, dest);
    
    return 0;
}