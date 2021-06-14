/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */
 
/**
 * 48 / 48 test cases passed.
 * Runtime: 68 ms
 * Memory Usage: 50.2 MB 
 */
class Solution {
public:
    int guessNumber(int n) {
        int l = 1, r = n;
        int ans;
        while (l <= r) {
            int num = l + (r - l) / 2;
            int check = guess(num);
            if (!check) {
                ans = num;
                break;
            }
            if (check > 0) l = num + 1;
            else r = num - 1;
        }
        return ans;
    }
};
