## Floyd

```python
# O(n^3)
for k in range(n):
    for i in range(n):
        for j in range(n):
            graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j])
```

## Bellman-ford

```python
# O(nm)
for i in range(vertex_num - 1): 
    for edge in edges: 
        source, target, weight = edge
        if distance[source] + weight < distance[target]:
            distance[target] = distance[source] + weight
```

judge whether there is a negative cycle

```python
for i in range(vertex_num - 1): 
    relax = False
    for edge in edges: 
        source, target, weight = edge
        if distance[source] + weight < distance[target]:
            distance[target] = distance[source] + weight
            relax = True
    if not relax: 
        # there is no negative cycle
        return False
    for edge in edges: 
        source, target, weight = edge
        if distance[source] + weight < distance[target]:
            # if also can be change, that's mean there is a negative cycle
            return True
    return False
```

## Dijkstra

cannot handle the situation with negative weights or cycles

```python
found = [False] * n
distance = [float('inf')] * n
found[source] = True
distance[source] = 0
for i in range(n):
    dest = -1
    for j in range(n):
        if not found[j] and (dest == -1 or distance[j] < distance[dest]):
            dest = j
    if dest == -1:
        return
    found[dest] = True
    for j in range(n):
        if distance[j] > distance[dest] + graph[dest][j]:
            distance[j] = distance[dest] + graph[dest][j]

```

optimized by using PriorityQueue/Heap

```python
import heapq
found = [False] * n
distance = [float('inf')] * n
distance[source] = 0
pq = []
heapq.heappush(pq, (0, source)) # (distance, target_node)
while pq:
    _, dest = heapq.heappop(pq)
    if found[dest]: 
        continue
    found[dest] = True
    for j in range(n):
        if distance[j] > distance[dest] + graph[dest][j]:
            distance[j] = distance[dest] + graph[dest][j]
            heapq.heappush(pq, (distance[j], j))
```
