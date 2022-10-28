/**
 * Runtime: 4 ms
 * Memory Usage: 10 MB 
 */
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int sign = 1;
        for (auto &num : nums) {
            if (num == 0) return 0;
            if (num < 0) sign *= -1;
        }
        return sign;
    }
};
