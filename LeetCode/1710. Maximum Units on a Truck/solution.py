"""
Runtime: 60 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def maximumUnits(self, boxTypes: List[List[int]], truckSize: int) -> int:
        boxTypes.sort(key=lambda x: x[1], reverse=True)
        ans = 0
        for numberOfBoxes, numberOfUnitsPerBox in boxTypes:
            if numberOfBoxes >= truckSize:
                ans += truckSize * numberOfUnitsPerBox
                break
            ans += numberOfBoxes * numberOfUnitsPerBox
            truckSize -= numberOfBoxes
        return ans
        