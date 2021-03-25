# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

"""
166 / 166 test cases passed.
Runtime: 48 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def deleteDuplicates(self, head: ListNode) -> ListNode:
        if not head or not head.next:
            return head
        if head.val != head.next.val:
            head.next = self.deleteDuplicates(head.next)
        else:
            while head and head.next and head.val == head.next.val:
                head.next = head.next.next
            return self.deleteDuplicates(head.next)
        return head

