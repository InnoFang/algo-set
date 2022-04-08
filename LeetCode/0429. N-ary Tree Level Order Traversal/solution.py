"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

"""
38 / 38 test cases passed.
Runtime: 60 ms
Memory Usage: 16.9 MB
"""
class Solution:
    def levelOrder(self, root: 'Node') -> List[List[int]]:
        if not root: return []
        ans = []
        que = collections.deque([root])
        while que:
            level = []
            for _ in range(len(que)):
                node = que.popleft()
                level.append(node.val)
                for child in node.children:
                    que.append(child)
            ans.append(level)
        return ans
