# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

"""
165 / 165 test cases passed.
Runtime: 60 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def deleteDuplicates(self, head: ListNode) -> ListNode:
        if not head or not head.next:
            return head
        if head.next and head.val != head.next.val:
            head.next = self.deleteDuplicates(head.next)
        else:
            while head.next and head.val == head.next.val:
                head = head.next
            return self.deleteDuplicates(head)
        return head
