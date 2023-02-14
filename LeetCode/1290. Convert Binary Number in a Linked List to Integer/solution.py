# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

"""
Runtime: 44 ms
Memory Usage: 14.7 MB
"""
class Solution:
    def getDecimalValue(self, head: ListNode) -> int:
        p = head
        ans = 0
        while p != None:
            ans <<= 1
            ans |= p.val 
            p = p.next
        return ans
