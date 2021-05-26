/**
 * 38 / 38 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 6.3 MB 
 */
class Solution {
public:
    string reverseParentheses(string s) {
        vector<char> stk;
        for(auto& c: s) {
            if (c == ')') {
                vector<char> reversed;
                while (stk.back() != '(') {
                    reversed.push_back(stk.back());
                    stk.pop_back();
                }
                stk.pop_back();
                stk.insert(stk.end(), reversed.begin(), reversed.end()); 
            } else {
                stk.push_back(c);
            }
        }
        return string(stk.begin(), stk.end());
    }
};
