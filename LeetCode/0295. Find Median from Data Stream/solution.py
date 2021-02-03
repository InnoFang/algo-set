"""
18 / 18 test cases passed.
Status: Accepted
Runtime: 204 ms
"""
import heapq

class MedianFinder:
    
    def __init__(self):
        """
        initialize your data structure here.
        """
        self.max_heap = []
        self.min_heap = []

    def addNum(self, num: int) -> None:
        heapq.heappush(self.min_heap, num)
        heapq.heappush(self.max_heap, -heapq.heappop(self.min_heap))
        if len(self.min_heap) < len(self.max_heap):
            heapq.heappush(self.min_heap, -heapq.heappop(self.max_heap))

    def findMedian(self) -> float:
        return self.min_heap[0] if len(self.min_heap) > len(self.max_heap) else (self.min_heap[0] - self.max_heap[0]) / 2



# Your MedianFinder object will be instantiated and called as such:
# obj = MedianFinder()
# obj.addNum(num)
# param_2 = obj.findMedian()