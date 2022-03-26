/**
 * 39 / 39 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 8 MB 
 */
class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> stk;
        for (auto &op : ops) {
            if (op == "C") stk.pop_back();
            else if (op == "D") stk.push_back(stk.back() * 2);
            else if (op == "+") stk.push_back(stk[stk.size() - 2] + stk.back());
            else stk.push_back(atoi(op.c_str()));
        }
        return accumulate(stk.begin(),stk.end(), 0);
    }
};
