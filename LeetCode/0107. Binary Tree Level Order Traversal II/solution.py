# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

"""
34 / 34 test cases passed.
Status: Accepted
Runtime: 32 ms
"""
from collections import deque

class Solution:
    def levelOrderBottom(self, root: TreeNode) -> List[List[int]]:
        if root is None:
            return []
        que = deque([root])
        que_size = len(que)
        traversal, level = [], []
        while len(que) != 0:
            node = que.popleft()
            level.append(node.val)
            if node.left:
                que.append(node.left)
            if node.right:
                que.append(node.right)
            que_size -= 1
            if que_size == 0:
                traversal.append(level)
                level = []
                que_size = len(que)
        
        traversal.reverse()
        return traversal

    
class Solution2:
    def levelOrderBottom(self, root: TreeNode) -> List[List[int]]:
        if root is None:
            return []
        
        ans, parent = [], [root]
        while parent:
            child = []
            level = []
            for node in parent:
                level.append(node.val)
                if node.left:
                    child.append(node.left)
                if node.right:
                    child.append(node.right)
            parent = child
            ans.append(level)
        
        return ans[::-1]
