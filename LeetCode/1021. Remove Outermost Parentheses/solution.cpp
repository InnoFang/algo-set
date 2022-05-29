/**
 * 59 / 59 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6.5 MB 
 */
class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        stack<char> stk;
        for (auto &c : s) {
            if (c == ')') stk.pop();
            if (stk.size()) ans.push_back(c);
            if (c == '(') stk.push(c);
        }
        return ans;
    }
};
