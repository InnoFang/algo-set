"""
67 / 67 test cases passed.
Runtime: 44 ms
Memory Usage: 15 MB
"""
class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:
        ans = []
        for i, x in enumerate(words):
            for j, y in enumerate(words):
                if i != j and x in y:
                    ans.append(x)
                    break
        return ans
