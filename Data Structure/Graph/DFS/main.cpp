#include <iostream>
#include <vector>

using namespace std;

typedef struct Graph {
    int vertexNum;
    int edgeNum;
    vector<vector<int>> arcs;
    Graph(int v, int e, vector<vector<int>> arc) : vertexNum(v), edgeNum(e), arcs(arc) {} 
} Graph;

void dfs(Graph graph, int v, vector<bool> &visited){

    visited[v] = true;
    std::cout << v << " ";
    for (int i = 0; i < graph.vertexNum; ++i) {
        if (graph.arcs[v][i] == 1 && visited[i] == false) {
            dfs(graph, i, visited);
        }
    }
}

void dfsTraversal(Graph graph) {
    vector<bool> visited(graph.vertexNum);
    for (int i = 0; i < graph.vertexNum; ++i) {
        visited[i] = false;
    }

    for (int i = 0; i < graph.vertexNum; ++i) {
        if (visited[i] == false) {
            dfs(graph, i, visited);
        }
    }
} 

int main() {
    int vertexNum = 5;
    int edgeNum = 7;
    vector<vector<int>> adjMat = {
        {0,1,1,0,1},
        {1,0,0,1,1},
        {1,0,0,1,0},
        {0,1,1,0,1},
        {1,1,0,1,0}
    };

    Graph graph(vertexNum, edgeNum, adjMat);
    dfsTraversal(graph);

    return 0;
}