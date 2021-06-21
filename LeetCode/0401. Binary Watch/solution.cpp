/**
 * 10 / 10 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 6.3 MB 
 */
class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        vector<string> ans;
        for (int i = 0; i < 12; ++ i) {
            for (int j = 0; j < 60; ++ j) {
                if (__builtin_popcount(i) + __builtin_popcount(j) == num) {
                    ans.push_back(to_string(i) + ":" + (j < 10 ? "0" + to_string(j) : to_string(j)));
                }
            }
        }
        return ans;
    }
};
