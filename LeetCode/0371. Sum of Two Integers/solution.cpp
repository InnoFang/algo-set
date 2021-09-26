/**
 * 13 / 13 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.8 MB 
 */
class Solution {
public:
    int getSum(int a, int b) {
        return a == 0 ? b : getSum((unsigned int) (a & b) << 1, a ^ b);
    }
};
