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

pre-order traversal: 1 2 4 5 7 3 6
'''

def preorder_traversal_by_recursion(root):
    if not root:
        return

    print(root.val, end=" ")
    preorder_traversal_by_recursion(root.left)
    preorder_traversal_by_recursion(root.right)

def preorder_traversal(root):
    if not root:
        return
    
    node, nodeStack = root, []
    while node or len(nodeStack):
        while node:
            print(node.val, end=" ")
            nodeStack.append(node.right)
            node = node.left
        node = nodeStack.pop()


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
    preorder_traversal_by_recursion(root)
    print()
    preorder_traversal(root)
    print()

if __name__ == '__main__':
    main()
    