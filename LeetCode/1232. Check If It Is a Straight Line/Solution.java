/**
 * 79 / 79 test cases passed.
 * Status: Accepted
 * Runtime: 0 ms
 */
class Solution {
    public boolean checkStraightLine(int[][] coordinates) {
        if (coordinates.length <= 2) return true;
        int x = coordinates[0][0], y = coordinates[0][1];
        int dx = coordinates[1][0] - x;
        int dy = coordinates[1][1] - y;
        for (int i = 2; i < coordinates.length; ++ i) {
            int _dx = coordinates[i][0] - x;
            int _dy = coordinates[i][1] - y;
            if (dx * _dy != _dx * dy) return false;
        }
        return true;
    }
}