/**
 * 167 / 167 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6.1 MB 
 */
class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;
        int max_depth = 0;
        for (auto &c : s) {
            if (c == '(') ++depth;
            else if (c == ')') --depth;
            max_depth = max(max_depth, depth);
        }
        return max_depth;
    }
};
