# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

"""
62 / 62 test cases passed.
Runtime: 76 ms
Memory Usage: 19.4 MB
"""
class Codec:

    def serialize(self, root: TreeNode) -> str:
        """Encodes a tree to a single string.
        """
        ret = []
        def preorder(node):
            if node:
                ret.append(str(node.val))
                preorder(node.left)
                preorder(node.right)
        preorder(root)
        return ' '.join(ret)
        

    def deserialize(self, data: str) -> TreeNode:
        """Decodes your encoded data to tree.
        """
        tree = collections.deque(map(int, data.split()))
        def construct(lower, upper):
            if tree and lower <= tree[0] <= upper:
                val = tree.popleft()
                node = TreeNode(val)
                node.left = construct(lower, val)
                node.right = construct(val, upper)
                return node
            return None
        return construct(-inf, inf)
        

# Your Codec object will be instantiated and called as such:
# Your Codec object will be instantiated and called as such:
# ser = Codec()
# deser = Codec()
# tree = ser.serialize(root)
# ans = deser.deserialize(tree)
# return ans
