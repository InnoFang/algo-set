/**
 * Runtime: 0 ms
 * Memory Usage: 5.9 MB 
 */
class Solution {
public:
    bool squareIsWhite(string c) {
        return ((c[0] - 'a') & 1) ^ ((c[1] - '1') & 1);
    }
};
