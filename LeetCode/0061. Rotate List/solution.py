# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

"""
231 / 231 test cases passed.
Runtime: 40 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def rotateRight(self, head: ListNode, k: int) -> ListNode:
        if not k or not head or not head.next:
            return head
        tail = head
        size = 1
        while tail.next:
            tail = tail.next
            size += 1
        if (step := size - k % size) == size:
            return head
        tail.next = head
        while step:
            step -= 1
            tail = tail.next
        head = tail.next
        tail.next = None
        return head
