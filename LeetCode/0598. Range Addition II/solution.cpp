/**
 * 69 / 69 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 10.8 MB 
 */
class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int min_x = m, min_y = n;
        for (auto &item: ops) {
            min_x = min(min_x, item[0]);
            min_y = min(min_y, item[1]);
        }
        return min_x * min_y;
    }
};
