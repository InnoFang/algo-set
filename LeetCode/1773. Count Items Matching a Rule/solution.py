"""
Runtime: 48 ms
Memory Usage: 19.2 MB
"""
class Solution:
    def countMatches(self, items: List[List[str]], ruleKey: str, ruleValue: str) -> int:
        key2idx = {'type': 0, 'color': 1, 'name':2 }
        ans = 0
        for item in items:
            i = key2idx[ruleKey]
            if item[i] == ruleValue:
                ans += 1
        return ans
