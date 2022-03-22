"""
206 / 206 test cases passed.
Runtime: 492 ms
Memory Usage: 119 MB
"""
class Solution:
    def countHighestScoreNodes(self, parents: List[int]) -> int:
        tree = collections.defaultdict(list)
        for child, parent in enumerate(parents):
            if parent != -1:
                tree[parent].append(child)
                
        n = len(parents)
        ans = max_score = 0
        def dfs(i):
            score, cnt = 1, 0
            for child in tree[i]:
                sz = dfs(child)
                cnt += sz
                score *= sz
            if i != 0:
                score *= n - cnt - 1
                
            nonlocal max_score, ans
            if score == max_score:
                ans += 1
            elif score > max_score:
                ans = 1
                max_score = score
            return cnt + 1
        dfs(0)
        return ans
