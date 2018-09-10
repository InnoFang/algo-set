const INF = 0x6ffffff;

function shortestPath(adjMat, distance, path) {
    const vertexNum = adjMat.length;

    for (let row = 0; row < vertexNum; ++row) {
        // distance[row].resize(vertexNum);
        // path[row].resize(vertexNum);
        for (let col = 0; col < vertexNum; ++col) {
            distance[row][col] = adjMat[row][col];
            path[row][col] = col;
        }
    }

    for (let i = 0; i < vertexNum; ++i) {
        for (let row = 0; row < vertexNum; ++row) {
            for (let col = 0; col < vertexNum; ++col) {
                const select =  (distance[row][i] == INF || distance[i][col] == INF)
                                   ? INF : distance[row][i] + distance[i][col];
                if (distance[row][col] > select) {
                    distance[row][col] = select;
                    path[row][col] = path[row][i];
                }
            }
        }
    }

}

function searchPath(path, distance, src, dest) {
    console.log("Weight: " + distance[src][dest]);

    // TODO: FIX BUG: TypeError: Cannot read property '6' of undefined

    let p = path[src][dest];
    const output = [src];
    while (p != dest) {
        output.push(p);
        p = path[p][dest];
    }
    output.push(dest);
    console.log("Path:   " + output.join(" -> "));
}

(function() {
    const vertexNum = 7;
    const src = 0;
    const dest = 6;

    const adjMat = [
        [ 0,    12,   14,    16,  INF,  INF,  INF],
        [ 12,    0,  INF,    7,    10,  INF,  INF],
        [ 14,  INF,    0,    9,   INF,    8,  INF],
        [ 16,    7,    9,    0,     6,    2,  INF],
        [INF,   10,  INF,    6,     0,    5,    3],
        [INF,  INF,    8,    2,     5,    0,    4],
        [INF,  INF,  INF,  INF,     3,    4,    0]
    ];
    const distance = Array(vertexNum).fill(null).map(() => {
        return Array(vertexNum).fill(null);
    });
    const path = Array(vertexNum).fill(null).map(() => {
        return Array(vertexNum).fill(null);
    });

    shortestPath(src, adjMat, distance, path);
    searchPath(path, distance, src, dest);
})()