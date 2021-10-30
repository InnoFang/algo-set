/**
 * 32 / 32 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 9.6 MB 
 */
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long xorsum = 0;
        for (auto &num : nums) {
            xorsum ^= num;
        }
        vector<int> ret(2);
        long mask = xorsum & (-xorsum);
        for (auto &num : nums) {
            if (mask & num) {
                ret[0] ^= num;
            } else {
                ret[1] ^= num;
            }
        }
        return ret;
    }
};
