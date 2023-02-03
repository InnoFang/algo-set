/**
 * Runtime: 0 ms
 * Memory Usage: 5.9 MB 
 */
class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0, sign = -1;
        while (n > 0) {
            sum += (n %  10) * sign;
            sign = -sign;
            n /= 10;
        }
        return sum * -sign;
    }
};
