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

post-order traversal: 4 7 5 2 6 3 1
'''

def postorder_traversal_by_recursion(root):
    if not root:
        return

    postorder_traversal_by_recursion(root.left)
    postorder_traversal_by_recursion(root.right)
    print(root.val, end=" ")


def postorder_traversal(root):
    if not root:
        return
    
    nodeStack, pre = [], None
    nodeStack.append(root)
    while len(nodeStack):
        cur = nodeStack[len(nodeStack) - 1]
        if cur.left and cur.left != pre and cur.right != pre:
            nodeStack.append(cur.left)
        elif cur.right and cur.right != pre:
            nodeStack.append(cur.right)
        else:
            print(cur.val, end=" ")
            pre = cur
            nodeStack.pop()
            


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
    postorder_traversal_by_recursion(root)
    print()
    postorder_traversal(root)
    print()


if __name__ == '__main__':
    main()