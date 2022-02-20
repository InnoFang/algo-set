/**
 * 93 / 93 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 9.7 MB 
 */
class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
       int pos = 0, n = bits.size();
       while (pos < n - 1) {
           pos += bits[pos] == 1 ? 2 : 1;
       }
       return pos == bits.size() - 1;
    }
};
