# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

"""
1568 / 1568 test cases passed.
Status: Accepted
Runtime: 68 ms
"""
class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        head, tail = None, None
        carry = 0
        while l1 or l2:
            v1 = l1.val if l1 else 0
            v2 = l2.val if l2 else 0
            carry, d = divmod(v1 + v2 + carry, 10)
            if not head:
                head = tail = ListNode(d)
            else:
                tail.next = ListNode(d)
                tail = tail.next
            if l1:
                l1 = l1.next
            if l2:
                l2 = l2.next
        if carry > 0:
            tail.next = ListNode(carry)
        return head

    
