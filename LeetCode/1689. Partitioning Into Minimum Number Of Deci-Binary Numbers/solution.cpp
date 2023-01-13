/**
 * Runtime: 28 ms
 * Memory Usage: 13.2 MB 
 */
class Solution {
public:
    int minPartitions(string n) {
        char mx = '0';
        for (auto &c: n) {
            mx = max(mx, c);
        }
        return mx - '0';
    }
};
