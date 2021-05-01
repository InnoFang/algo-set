"""
# Definition for Employee.
class Employee:
    def __init__(self, id: int, importance: int, subordinates: List[int]):
        self.id = id
        self.importance = importance
        self.subordinates = subordinates
"""

"""
108 / 108 test cases passed.
Runtime: 212 ms
Memory Usage: 16.1 MB
"""
class Solution:
    def getImportance(self, employees: List['Employee'], id: int) -> int:
        store = {e.id: e for e in employees}
        def dfs(eid):
            return store[eid].importance + sum(map(dfs, store[eid].subordinates))
        return dfs(id)