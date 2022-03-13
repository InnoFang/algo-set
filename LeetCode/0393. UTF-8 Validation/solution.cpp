/**
 * 49 / 49 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 13.5 MB 
 */
class Solution {
public:
    bool validUtf8(vector<int>& data) {
        int bit_index = 0;
        for (auto &num : data) {
            if (bit_index == 0) {
                if (num >> 5 == 0b110) bit_index = 1;
                else if (num >> 4 == 0b1110) bit_index = 2;
                else if (num >> 3 == 0b11110) bit_index = 3;
                else if (num >> 7) return false;
            } else {
                if (num >> 6 == 0b10) -- bit_index;
                else return false;
            }
        }
        return bit_index == 0;
    }
};
