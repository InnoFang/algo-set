import queue
def tree_by_levels(node):
    if not node: return []
    que = queue.Queue()
    que.put(node)
    ans = []
    while not que.empty():
        n = que.get()
        ans.append(n.value) 
        if n.left:  que.put(n.left)
        if n.right: que.put(n.right)
    return ans
    