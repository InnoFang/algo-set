"""
51 / 51 test cases passed.
Runtime: 72 ms
Memory Usage: 16 MB
"""
class Node:
    __slots__ = 'prev', 'next', 'val'

    def __init__(self, val):
        self.prev = self.next = None
        self.val = val


class MyCircularDeque:
    def __init__(self, k: int):
        self.head = self.tail = None
        self.capacity = k
        self.size = 0

    def insertFront(self, value: int) -> bool:
        if self.isFull():
            return False
        node = Node(value)
        if self.isEmpty():
            self.head = node
            self.tail = node
        else:
            node.next = self.head
            self.head.prev = node
            self.head = node
        self.size += 1
        return True

    def insertLast(self, value: int) -> bool:
        if self.isFull():
            return False
        node = Node(value)
        if self.isEmpty():
            self.head = node
            self.tail = node
        else:
            self.tail.next = node
            node.prev = self.tail
            self.tail = node
        self.size += 1
        return True

    def deleteFront(self) -> bool:
        if self.isEmpty():
            return False
        self.head = self.head.next
        if self.head:
            self.head.prev = None
        self.size -= 1
        return True

    def deleteLast(self) -> bool:
        if self.isEmpty():
            return False
        self.tail = self.tail.prev
        if self.tail:
            self.tail.next = None
        self.size -= 1
        return True

    def getFront(self) -> int:
        return -1 if self.isEmpty() else self.head.val

    def getRear(self) -> int:
        return -1 if self.isEmpty() else self.tail.val

    def isEmpty(self) -> bool:
        return self.size == 0

    def isFull(self) -> bool:
        return self.size == self.capacity

# Your MyCircularDeque object will be instantiated and called as such:
# obj = MyCircularDeque(k)
# param_1 = obj.insertFront(value)
# param_2 = obj.insertLast(value)
# param_3 = obj.deleteFront()
# param_4 = obj.deleteLast()
# param_5 = obj.getFront()
# param_6 = obj.getRear()
# param_7 = obj.isEmpty()
# param_8 = obj.isFull()
