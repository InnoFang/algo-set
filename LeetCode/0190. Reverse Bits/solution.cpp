/**
 * 600 / 600  test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.9 MB 
 */
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        for (int i = 32; i --> 0;) {
            ans = ans << 1 | n & 1;
            n >>= 1;    
        }
        return ans;
    }
};
