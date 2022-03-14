"""
136 / 136 test cases passed.
Runtime: 36 ms
Memory Usage: 15.3 MB
"""
class Solution:
    def findRestaurant(self, list1: List[str], list2: List[str]) -> List[str]:
        rec = {res:i for i, res in enumerate(list1)}
        least = float('inf')
        ans = []
        for i, res in enumerate(list2):
            if res in rec:
                if i + rec[res] < least:
                    least = i + rec[res]
                    ans = [res]
                elif i + rec[res] == least:
                    ans.append(res)
        return ans
        