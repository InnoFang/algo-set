"""
175 / 175 test cases passed.
Runtime: 44 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        ans = []
        def dfs(start, rest, path):
            if rest == 0:
                ans.append(path[:])
                return
            for i in range(start, len(candidates)):
                if rest < candidates[i]:
                    return
                if i > start and candidates[i - 1] == candidates[i]:
                    continue
                path.append(candidates[i])
                dfs(i + 1, rest - candidates[i], path)
                path.pop()
        candidates.sort()
        dfs(0, target, [])
        return ans
