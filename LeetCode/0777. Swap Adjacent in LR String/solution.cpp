/**
 * 94 / 94 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 7.2 MB 
 */
class Solution {
public:
    bool canTransform(string start, string end) {
        int n = start.size();
        int i = 0, j = 0;
        for (;;) {
            while (i < n && start[i] == 'X') ++ i;
            while (j < n && end[j] == 'X') ++ j;
            if (i == n && j == n) return true;
            if (i == n || j == n || start[i] != end[j]) return false;
            if (start[i] == 'R' && i > j) return false;
            if (start[i] == 'L' && i < j) return false;
            ++i;
            ++j;
        }
        return true;
    }
};
