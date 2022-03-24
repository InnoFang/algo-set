"""
70 / 70 test cases passed.
Runtime: 124 ms
Memory Usage: 20.6 MB
"""
class Solution:
    def possibleBipartition(self, n: int, dislikes: List[List[int]]) -> bool:
        graph = collections.defaultdict(list)
        for dislike in dislikes:
            graph[dislike[0]].append(dislike[1])
            graph[dislike[1]].append(dislike[0])
        person = [-1] * (n + 1)

        def dfs(idx, color):
            if person[idx] != -1: return person[idx] == color
            person[idx] = color
            for adj in graph[idx]:
                if not dfs(adj, not color):
                    return False
            return True

        for i in range(1, n + 1):
            if person[i] == -1 and not dfs(i, 0):
                return False
        return True
        