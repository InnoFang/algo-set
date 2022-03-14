"""
170 / 170 test cases passed.
Runtime: 64 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        n = len(candidates)
        ans, path = [], []
        def dfs(begin, rest):
            if rest == 0:
                ans.append(path[:])
                return
            for i in range(begin, n):
                if rest - candidates[i] < 0:
                    return
                path.append(candidates[i])
                dfs(i, rest - candidates[i])
                path.pop()
        candidates.sort()
        dfs(0, target)
        return ans
