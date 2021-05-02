/**
 * 87 / 87 test cases passed.
 * Runtime: 48 ms
 * Memory Usage: 21.1 MB 
 */
class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<int, int> store;
        for (auto& bricks: wall) {
            int width = 0;
            for (int i = 0; i < bricks.size() - 1; ++ i) {
                width += bricks[i];
                store[width] += 1;
            }
        }
        int through = 0;
        for (auto& [width, count]: store) {
            through = max(through, count);
        }
        return wall.size() - through;
    }
};
