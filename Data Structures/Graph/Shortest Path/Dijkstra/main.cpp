#include <iostream>
#include <vector>
#include <stack> 

using namespace std;     

const int INF = 0x7ffffff;

/* find the smallest distance not yet checked */
int choose(vector<int> distance, vector<bool> found) {
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
    pre[i] represents the precursor node of i
*/
void shortestPath(int src, vector<vector<int>> adjMat, vector<int> &distance, vector<bool> &found, vector<int> &pre) {
    int vertexNum = adjMat.size();
    for (int i = 0; i < vertexNum; ++i) {
        found[i] = false;
        pre[i] = src;
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
                    pre[j] = dest;
                }  
            }  
        } 
    }
}

void searchPath(vector<int> pre, int src, int dest) {
    stack<int> path;
    path.push(dest); 
    int p = pre[dest]; 
    while (p != src) {
        path.push(p);
        p = pre[p]; 
    }
    cout << src;
    while (!path.empty()) {
        cout << " -> " << path.top();
        path.pop();  
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
    vector<int> pre(vertexNum);

    shortestPath(src, adjMat, distance, found, pre);
    searchPath(pre, src, dest);

    return 0;
}