import queue

class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


'''
The binary tree in this example is shown as follow

       1
     /   \
    2     3
   / \   /  
  4   5 6
     /
    7

level-order traversal: 1 2 3 4 5 6 7
'''


def levelorder_traversal(root):
    if not root:
        return
    
    que = queue.Queue()
    que.put(root)
    while not que.empty():
        node = que.get()
        print(node.val, end=" ")
        if node.left:
            que.put(node.left)
        if node.right:
            que.put(node.right)


def generate_B_tree(nodes, index):
    node = None
    if index < len(nodes) and nodes[index]:
        node = TreeNode(nodes[index])
        node.left = generate_B_tree(nodes, index * 2 + 1)
        node.right = generate_B_tree(nodes, index * 2 + 2)
    return node


def main():
    nodes = [1, 2, 3, 4, 5, 6, None, None, None, 7]
    root = generate_B_tree(nodes, 0) 
    levelorder_traversal(root)
    print()


if __name__ == '__main__':
    main()
    