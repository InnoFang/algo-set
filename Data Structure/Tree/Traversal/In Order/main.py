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

in-order traversal: 4 2 7 5 1 6 3
'''

def inorder_traversal_by_recursion(root):
    if not root:
        return

    inorder_traversal_by_recursion(root.left)
    print(root.val, end=" ")
    inorder_traversal_by_recursion(root.right)

def inorder_traversal(root):
    if not root:
        return
    
    node, nodeStack = root, []
    while node or len(nodeStack):
        while node:
            nodeStack.append(node)
            node = node.left
        node = nodeStack.pop()
        print(node.val, end=" ")
        node = node.right


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
    inorder_traversal_by_recursion(root)
    print()
    inorder_traversal(root)
    print()

if __name__ == '__main__':
    main()
    