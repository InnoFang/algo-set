/**
 * 241 / 241 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.9 MB 
 */
class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";
        bool neg = num < 0;
        num = abs(num);
        string digits;
        while (num > 0) {
            digits += to_string(num % 7);
            num /= 7;
        }
        if (neg) digits += "-";
        reverse(digits.begin(), digits.end());
        return digits;
    }
};
