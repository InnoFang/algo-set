/**
 * 151 / 151 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 14.8 MB 
 */
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;
        int i = 0;
        for (auto &num : pushed) {
            s.push(num);
            while (!s.empty() && s.top() == popped[i]) {
                ++ i;
                s.pop();
            }
        }
        return s.empty();
    }
};
