/**
 * 3377 / 3377 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.8 MB 
 */
class Solution {
public:
    int lastRemaining(int n) {
        int head = 1;
        int step = 1;
        bool left = true;
        while (n > 1) {
            if (left || n & 1) {
                head += step;
            }
            step <<= 1;
            left = !left;
            n >>= 1;
        }
        return head;
    }
};
