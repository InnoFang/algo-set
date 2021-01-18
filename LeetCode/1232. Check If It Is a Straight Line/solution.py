"""
79 / 79 test cases passed.
Status: Accepted
Runtime: 64 ms
"""
class Solution:
    def checkStraightLine(self, coordinates: List[List[int]]) -> bool:
        if len(coordinates) <= 2:
            return True;
        dx = coordinates[1][0] - coordinates[0][0]
        dy = coordinates[1][1] - coordinates[0][1]
        for coor in coordinates[2:]:
            _dx = coor[0] - coordinates[0][0]
            _dy = coor[1] - coordinates[0][1]
            if dx * _dy != _dx * dy:
                return False
        return True
