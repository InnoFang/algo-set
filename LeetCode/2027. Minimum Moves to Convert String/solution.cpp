/**
 * Runtime: 0 ms
 * Memory Usage: 6.3 MB 
 */
class Solution {
public:
    int minimumMoves(string s) {
        int move = 0, cover = -1;
        for (int i = 0; i < s.size(); ++ i) {
            if (s[i] == 'X' && i > cover) {
                ++ move;
                cover = i + 2;
            }
        }
        return move;
    }
};
