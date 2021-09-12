/**
 * 83 / 83 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6 MB 
 */
class Solution {
public:
    bool checkValidString(string s) {
        int minInvalid = 0, maxInvalid = 0;
        for (const char& c: s) {
            if (c == '(') minInvalid++, maxInvalid++;
            else if (c == ')') minInvalid--, maxInvalid--;
            else minInvalid--, maxInvalid++;
            if (minInvalid < 0) minInvalid = 0;
            if (maxInvalid < 0) return false;
        }
        return 0 == minInvalid;
    }
};
