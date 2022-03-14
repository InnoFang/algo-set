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
        

"""
136 / 136 test cases passed.
Runtime: 64 ms
Memory Usage: 15.4 MB
"""
class Solution2:
    def findRestaurant(self, list1: List[str], list2: List[str]) -> List[str]:
        rec1 = {res : i for i, res in enumerate(list1)}
        rec2 = {res : i for i, res in enumerate(list2)}
        agreements = set(list1) & set(list2)
        sum_index = {res : rec1[res] + rec2[res] for res in agreements}
        least = min(sum_index.values())
        return [res for res, i in sum_index.items() if i == least]
