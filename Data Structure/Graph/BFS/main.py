import queue

class Graph:
    def __init__(self, v, e, arcs):
        self.vertex_num = v
        self.edge_num = e
        self.arcs = arcs


def bfs(graph, visited, v):
    visited[v] = True
    que = queue.Queue()
    que.put(v)
    while not que.empty():
        node = que.get()
        print(node, end=" ")
        for i in range(graph.vertex_num):
            if graph.arcs[v][i] == 1 and not visited[i]:
                que.put(i)
                visited[i] = True

def bfsTraversal(graph):
    visited = [False for _ in range(graph.vertex_num)]
    for i in range(graph.vertex_num):
        if not visited[i]:
            bfs(graph, visited, i)

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
    bfsTraversal(graph)

if __name__ == '__main__':
    main()
    