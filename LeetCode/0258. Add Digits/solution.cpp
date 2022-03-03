/**
 * 1101 / 1101 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.8 MB 
 */
class Solution {
public:
    int addDigits(int num) {
        int tmp = 0;
        while (num >= 10) {
            tmp = 0;
            while (num) {
                tmp += num % 10;
                num /= 10;
            }
            num = tmp;
        }
        return num;
    }
};
