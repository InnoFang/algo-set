"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""


"""
38 / 38 test cases passed.
Runtime: 80 ms
Memory Usage: 17 MB
"""
class Solution:
    def preorder(self, root: 'Node') -> List[int]:
        ans = []
        def dfs(node):
            if not node: return 
            ans.append(node.val)
            for n in node.children:
                dfs(n)
        dfs(root)
        return ans
