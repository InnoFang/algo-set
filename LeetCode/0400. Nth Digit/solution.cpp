/**
 * 71 / 71 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6 MB 
 */
class Solution {
public:
    int findNthDigit(int n) {
        /** digit capacity = 1, amount is 9  , whose range is [1  , 9  ], 9    digits in total
         *                 = 2, amount is 90 , whose range is [10 , 99 ], 180  digits in total
         *                 = 3, amount is 900, whose range is [100, 999], 2700 digits in total
         *                 = i, amount is k  , whose range is [10 ^ (i - 1), 10 ^ i], (k * i) digits in total
         */
        size_t capacity = 1; // digit capacity, start from 1
        size_t amount = 9;   // the number amount is " 9 * 10 ^ (capacity - 1)"
        while (n > amount * capacity) {
            n -= amount * capacity;
            amount *= 10;
            capacity += 1;
        }
        int number = (n - 1) / capacity + amount / 9; // find the number
        n -= (number - amount / 9) * capacity;        // substract the number of digits from the previous number
        return to_string(number)[n - 1] - '0';

    }
};
