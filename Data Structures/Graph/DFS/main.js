function Graph(vertexNum, edgeNum, arcs) {
    this.vertexNum = vertexNum;
    this.edgeNum = edgeNum;
    this.arcs = arcs;
}


const output = []

function dfs(graph, visited, vertex) {
    visited[vertex] = true;
    output.push(vertex);
    for (let i = 0; i < graph.vertexNum; ++i) {
        if (graph.arcs[vertex][i] == 1 && visited[i] == false) {
            dfs(graph, visited, i);
        }
    }
}

function dfsTraversal(graph) {
    const visited = new Array(graph.vertexNum);
    for (let i = 0; i < graph.vertexNum; ++i) {
        visited[i] = false;
    }

    for (let i = 0; i < graph.vertexNum; ++i) {
        if (visited[i] == false) {
            dfs(graph, visited, i);
        }
    }
}

(function() {
    const vertexNum = 5;
    const edgeNum = 7;
    const adjMat = [
        [0,1,1,0,1],
        [1,0,0,1,1],
        [1,0,0,1,0],
        [0,1,1,0,1],
        [1,1,0,1,0]
    ];
    const graph = new Graph(vertexNum, edgeNum, adjMat);
    dfsTraversal(graph);
    console.log(output);
})()