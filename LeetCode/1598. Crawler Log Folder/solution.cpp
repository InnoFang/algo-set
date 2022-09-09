/**
 * 99 / 99 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 10.5 MB 
 */
class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> s;
        for (auto &log: logs) {
            if (log == "../") {
                if (!s.empty()) s.pop();
                continue;
            } else if (log == "./") {
                continue;
            }
            s.push(log);
        }
        return s.size();
    }
};
