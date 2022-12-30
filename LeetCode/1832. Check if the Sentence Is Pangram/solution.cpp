/**
 * Runtime: 4 ms
 * Memory Usage: 6.2 MB 
 */
class Solution {
public:
    bool checkIfPangram(string sentence) {
        if (sentence.size() < 26) return false;
        int mask = 0;
        for (auto &c: sentence) {
            mask |= 1 << (c - 'a');
        }
        return mask == 0x3FFFFFF;
    }
};
