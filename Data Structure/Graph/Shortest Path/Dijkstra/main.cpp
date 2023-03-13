#include <iostream>
#include <vector>
#include <stack> 

using namespace std;     

const int INF = 0x7ffffff;

/* find the smallest distance not yet checked */
int choose(const vector<int> &distance, const vector<bool> &found) {
    int min = INF;
    int minPos = -1;
    for (int i = 0; i < distance.size(); ++i) {
        if (distance[i] < min && !found[i]) {
            min = distance[i];
            minPos = i;
        }
    }
    return minPos;
}

/* 
    adjMat is the adjacency matrix
    distance[i] represents the shortest path from vertex src to i
    found[i] holds a 0 if the shortest path from vertex i has not been found and a 1 if it has
    path[i] represents the precursor node of i
*/
void shortestPath(int src, vector<vector<int>> &adjMat, vector<int> &distance, vector<bool> &found, vector<int> &path) {
    int vertexNum = adjMat.size();
    for (int i = 0; i < vertexNum; ++i) {
        found[i] = false;
        path[i] = src;
        distance[i] = adjMat[src][i];
    }
    found[src] = true;
    distance[src] = 0;
    for (int i = 0; i < vertexNum - 2; ++i) {
        int dest = choose(distance, found);
        found[dest] = true;
        for (int j = 0; j < vertexNum; ++j) {
            if (!found[j] ) {
                if (distance[dest] + adjMat[dest][j] < distance[j]) {
                    distance[j] = distance[dest] + adjMat[dest][j];
                    path[j] = dest;
                }  
            }  
        } 
    }
}

void searchPath(vector<int> &path, vector<int> &distance, int src, int dest) {
    cout << "Weight: " << distance[dest] << endl;

    stack<int> pathStack;
    pathStack.push(dest); 
    int p = path[dest]; 
    while (p != src) {
        pathStack.push(p);
        p = path[p]; 
    }
    cout << "Path:   " << src;
    while (!pathStack.empty()) {
        cout << " -> " << pathStack.top();
        pathStack.pop();  
    }
    cout << endl;
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
    vector<int> distance(vertexNum);
    vector<bool> found(vertexNum);
    vector<int> path(vertexNum);

    shortestPath(src, adjMat, distance, found, path);
    searchPath(path, distance, src, dest);

    return 0;
}
