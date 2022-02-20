/**
 * 71 / 71 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.7 MB 
 */
class Solution {
public:
    int countEven(int num) {
        int ans = 0;
        for (int i = 1; i <= num; ++ i) {
            int n = i;
            int sum = 0;
            while (n) {
                sum += (n % 10);
                n /= 10;
            } 
            if (sum % 2 == 0) {
                ++ ans;
            }
        }
        return ans;
    }
};
