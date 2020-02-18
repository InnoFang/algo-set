function Graph(vertexNum, edgeNum, arcs) {
    this.vertexNum = vertexNum;
    this.edgeNum = edgeNum;
    this.arcs = arcs;
}

const output = [];

function bfs(graph, visited, vertex) {
    visited[vertex] = true;
    const que = [vertex];
    while (que.length !== 0) {
        const node = que.shift();
        output.push(node);
        for (let i = 0; i < graph.vertexNum; ++i) {
            if (graph.arcs[vertex][i] == 1 && !visited[i]) {
                visited[i] = true;
                que.push(i);
            }
        }
    }
}


function bfsTraversal(graph) {
    let visited = new Array(graph.vertexNum);
    for (let i = 0; i < graph.vertexNum; ++i) {
        visited[i] = false;
    }

    for (let i = 0; i < graph.vertexNum; ++i) {
        if (!visited[i]) {
            bfs(graph, visited, i);
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
    bfsTraversal(graph);
    console.log(output);
})()
