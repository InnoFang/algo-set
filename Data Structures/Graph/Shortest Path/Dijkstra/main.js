const INF = 0x6fffffff;

function choose(distance, found) {
    let min = INF;
    let minPos = -1;
    for (let i = 0 ; i < distance.length; ++i) {
        if (distance[i] < min && !found[i]) {
            min = distance[i];
            minPos = i;
        }
    }
    return minPos;
}

function shortestPath(src, adjMat, distance, found, path) {
    let vertexNum = adjMat.length;
    for (let i = 0; i < vertexNum; ++i) {
        found[i] = false;
        path[i] = src;
        distance[i] = adjMat[src][i];
    }

    found[src] = true;
    distance[src] = 0;
    for (let i = 0; i < vertexNum - 2; ++i) {
        const dest = choose(distance, found);
        found[dest] = true;
        for (let j = 0; j < vertexNum; ++j) {
            if (!found[j]) {
                if (distance[dest] + adjMat[dest][j] < distance[j]) {
                    distance[j] = distance[dest] + adjMat[dest][j];
                    path[j] = dest;
                }
            }
        }
    }
}

function searchPath(path, distance, src, dest) {
    console.log("Weight: " + distance[dest]);

    const pathStack = [];
    pathStack.push(dest);
    let p = path[dest];
    while (p != src) {
        pathStack.push(p);
        p = path[p];
    }
    output = [src];
    while (pathStack.length !== 0) {
        output.push(pathStack.pop());
    }
    
    console.log("Path: " + output.join(" -> "));
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
    const distance = new Array(vertexNum);
    const path = new Array(vertexNum);
    const found = new Boolean(vertexNum);

    shortestPath(src, adjMat, distance, found, path);
    searchPath(path, distance, src, dest);
})()