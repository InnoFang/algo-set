/**
 * 72 / 72 test cases passed.
 * Status: Accepted
 * Runtime: 12 ms
 */

class Solution {
public:
    bool judgeCircle(string moves) {
        int hor = 0;
        int vec = 0;
        for (auto& move : moves) {
            if (move == 'U') ++ vec;
            else if (move == 'D') -- vec;
            else if (move == 'R') ++ hor;
            else if (move == 'L') -- hor;
        }
        return hor == 0 && vec == 0;
    }
};
