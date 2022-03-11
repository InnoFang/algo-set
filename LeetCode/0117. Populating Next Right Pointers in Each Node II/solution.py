"""
# Definition for a Node.
class Node:
    def __init__(self, val: int = 0, left: 'Node' = None, right: 'Node' = None, next: 'Node' = None):
        self.val = val
        self.left = left
        self.right = right
        self.next = next
"""

"""
55 / 55 test cases passed.
Runtime: 56 ms
Memory Usage: 16.3 MB
"""
class Solution:
    def connect(self, root: 'Node') -> 'Node':
        if not root: None
        
        que = collections.deque([root])
        while que:
            prev = None
            for _ in range(len(que)):
                curr = que.popleft()
                if curr and curr.left: que.append(curr.left)
                if curr and curr.right: que.append(curr.right)
                if prev: prev.next = curr
                prev = curr
        return root
