/**
 * 79 / 79 test cases passed.
 * Status: Accepted
 * Runtime: 8 ms
 */
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int deltaX = coordinates[0][0], deltaY = coordinates[0][1];
        for (int i = 0; i < coordinates.size(); ++ i) {
            coordinates[i][0] -= deltaX;
            coordinates[i][1] -= deltaY;
        }
        // int k = (int) coordinates[1][1] / coordinates[1][0];
        // (x-x1)/(x2-x1)=(y-y1)/(y2-y1), x1=0,y1=0
        // y2 x = x1 y => Ax = By
        int A = coordinates[1][1], B = coordinates[1][0];
        for (int i = 2; i < coordinates.size(); ++ i) {
            if (A * coordinates[i][0] != B * coordinates[i][1]) {
                return false;
            }
        }
        return true;
    }
};

