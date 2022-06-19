# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

"""
58 / 58 test cases passed.
Runtime: 56 ms
Memory Usage: 18.5 MB
"""
class Solution:
    def findFrequentTreeSum(self, root: TreeNode) -> List[int]:
        cnt = Counter()
        def dfs(node):
            if node:
                total = node.val + dfs(node.left) + dfs(node.right)
                cnt[total] += 1
                return total
            return 0
        dfs(root)
        _max = max(cnt.values())
        return [s for s, c in cnt.items() if c == _max]
 