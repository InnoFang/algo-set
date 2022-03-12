"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

"""
38 / 38 test cases passed.
Runtime: 56 ms
Memory Usage: 16.9 MB
"""
class Solution:
    def __init__(self): 
        self.ans = []
    def postorder(self, root: 'Node') -> List[int]:
        if root:
            for child in root.children:
                self.postorder(child)
            self.ans.append(root.val)
        return self.ans
        