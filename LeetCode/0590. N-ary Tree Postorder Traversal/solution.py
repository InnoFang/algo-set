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
    

"""
38 / 38 test cases passed.
Runtime: 48 ms
Memory Usage: 16.9 MB
"""
class Solution2:
    def postorder(self, root: 'Node') -> List[int]:
        ans = []
        if not root:
            return ans
        stk = []
        while root or stk:
            while root:
                stk.append(root)
                children = root.children
                root = children.pop(0) if children else None
            root = stk[-1]
            if not root.children:
                ans.append(stk.pop().val)
                root = None
            else:
                root = root.children.pop(0)
        return ans
             