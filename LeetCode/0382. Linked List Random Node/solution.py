# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

"""
8 / 8 test cases passed.
Runtime: 140 ms
Memory Usage: 17.6 MB
"""
class Solution:

    def __init__(self, head: Optional[ListNode]):
        self.head = head       

    def getRandom(self) -> int:
        cur, i, ret = self.head, 1, 0
        while cur:
            if not randrange(i):
                ret = cur.val
            i, cur = i + 1, cur.next
        return ret



# Your Solution object will be instantiated and called as such:
# obj = Solution(head)
# param_1 = obj.getRandom()
