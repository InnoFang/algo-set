/**
 * 195 / 195 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 5.8 MB 
 */
class Solution {
public:
    bool reachingPoints(int sx, int sy, int tx, int ty) {
        while (tx >= sx && ty >= sy) {
            if (tx == sx && ty == sy) return true;
            if (tx > ty) {
                tx -= max((tx - sx) / ty, 1) * ty;
            } else {
                ty -= max((ty - sy) / tx, 1) * tx;
            }
        }
        return false;
    }
};
