/**
 * 51 / 51 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 7.1 MB 
 */
class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int counter[2] = {0, 0};
        for (auto &x : position) {
            ++ counter[x & 1];
        }
        return min(counter[0], counter[1]);
    }
};
