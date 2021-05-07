/**
 * 54 / 54 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.8 MB 
 */
class Solution {
public:
    int xorOperation(int n, int start) {
        int ans = 0;
        for (int i = 0; i < n; ++ i ) {
            ans ^= start + 2 * i;
        }
        return ans;
    }
};
