#include <iostream>
#include <vector>
#include <queue>

using namespace std;

typedef struct Graph {
    int vertexNum;
    int edgeNum;
    vector<vector<int>> arcs;
    Graph(int v, int e, vector<vector<int>> arc) : vertexNum(v), edgeNum(e), arcs(arc) {} 
} Graph;

void bfs(Graph graph, int v, vector<bool> &visited){
    visited[v] = true;
    queue<int> que;
    que.push(v);
    while (!que.empty()) {
        int node = que.front();
        cout << node << " ";
        que.pop();
        for (int i = 0; i < graph.arcs[v].size(); ++i) {
            if (graph.arcs[v][i] == 1 && !visited[i]) {
                visited[i] = true;
                que.push(i);
            }
        }
    }
}

void bfsTraversal(Graph graph) {
    vector<bool> visited(graph.vertexNum);
    for (int i = 0; i < graph.vertexNum; ++i) {
        visited[i] = false;
    }

    for (int i = 0; i < graph.vertexNum; ++i) {
        if (visited[i] == false) {
            bfs(graph, i, visited);
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
    bfsTraversal(graph);

    return 0;
}