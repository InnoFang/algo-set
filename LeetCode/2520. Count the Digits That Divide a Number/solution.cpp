/**
 * Runtime: 4 ms
 * Memory Usage: 5.8 MB 
 */
class Solution {
public:
    int countDigits(int num) {
        int ans = 0, tmp = num;
        while (tmp > 0) {
            ans += num % (tmp % 10) == 0;
            tmp /= 10;
        }
        return ans;
    }
};
