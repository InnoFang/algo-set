"""
150 / 150 test cases passed.
Runtime: 52 ms
Memory Usage: 15.2 MB
"""
class Solution:
    def isValidSerialization(self, preorder: str) -> bool:
        count = 1
        pre = preorder.split(',')
        for i, node in enumerate(pre):
            count += 1 if node.isdigit() else 0
            count -= 1 if node == '#' else 0
            print(count, i)
            if not count and i != len(pre) - 1:
                return False;
        return count == 0

"""
150 / 150 test cases passed.
Runtime: 40 ms
Memory Usage: 14.5 MB
"""
class Solution:
    def isValidSerialization(self, preorder: str) -> bool:
        slots = 1
        for node in preorder.split(','):
            slots -= 1
            if slots < 0:
                return False
            if node != '#':
                slots += 2
        return slots == 0