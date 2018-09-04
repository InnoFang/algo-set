class Graph:
    def __init__(self, v, e, arcs):
        self.vertex_num = v
        self.edge_num = e
        self.arcs = arcs


def dfs(graph, visited, v):
    visited[v] = True
    print(v, end=" ")
    for i in range(graph.vertex_num):
        if graph.arcs[v][i] and not visited[i]:
            dfs(graph, visited, i)

def dfsTraversal(graph):
    visited = [False for _ in range(graph.vertex_num)]
    for i in range(graph.vertex_num):
        if not visited[i]:
            dfs(graph, visited, i)

def main():
    vertex_num = 5
    edge_num = 7
    adj_mat = [
        [0,1,1,0,1],
        [1,0,0,1,1],
        [1,0,0,1,0],
        [0,1,1,0,1],
        [1,1,0,1,0]]
    graph = Graph(vertex_num, edge_num, adj_mat)
    dfsTraversal(graph)

if __name__ == '__main__':
    main()
    