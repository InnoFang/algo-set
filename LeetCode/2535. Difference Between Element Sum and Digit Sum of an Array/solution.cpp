/**
 * Runtime: 8 ms
 * Memory Usage: 15.2 MB 
 */
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int a = 0, b = 0;
        for (auto num: nums) {
            a += num;
            while (num > 0) {
                b += num % 10;
                num /= 10;
            }
        }
        return abs(a - b);
    }
};
