/**
 * 83 / 83 test cases passed.
 * Runtime: 124 ms
 * Memory Usage: 13 MB 
 */
class Solution {
public:
    bool winnerOfGame(string colors) {
        int count = 0, n = colors.size();
        for (int i = 0; i < n - 2; ++ i) {
            if (colors.substr(i, 3) == "AAA") ++ count;
            else if (colors.substr(i, 3) == "BBB") -- count;
        }
        return count > 0;
    }
};
