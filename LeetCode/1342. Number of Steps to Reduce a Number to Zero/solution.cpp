/**
 * 204 / 204 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.9 MB 
 */
class Solution {
public:
    int numberOfSteps(int num) {
        int step = 0;
        while (num > 0) {
            if (num & 1) --num;
            else num >>= 1;
            ++step;
        }
        return step;
    }
};
