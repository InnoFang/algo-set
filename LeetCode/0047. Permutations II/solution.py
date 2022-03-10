"""
33 / 33 test cases passed.
Runtime: 48 ms
Memory Usage: 15.3 MB
"""
class Solution:
    def permuteUnique(self, nums: List[int]) -> List[List[int]]:
        n = len(nums)
        ans = []
        vis = [False] * n

        def dfs(path):
            if len(path) == n:
                ans.append(path[:])
                return
            seen = set()
            for i, num in enumerate(nums):
                if num not in seen and not vis[i]:
                    vis[i] = True
                    path.append(num)
                    seen.add(num)
                    dfs(path)
                    path.pop()
                    vis[i] = False
        dfs([])
        return ans
