/**
 * 52 / 52 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6 MB 
 */
class Solution {
public:
    vector<int> constructRectangle(int area) {
        int width = static_cast<int>(sqrt(area));
        for (; area % width != 0; width--) { }
        return {static_cast<int>(area / width), width};
    }
};
