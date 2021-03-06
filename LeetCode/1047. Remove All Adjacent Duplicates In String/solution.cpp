/**
 * 98 / 98 test cases passed.
 * Runtime: 16 ms
 * Memory Usage: 10.6 MB 
 */
class Solution {
public:
    string removeDuplicates(string S) {
        vector<char> stk;
        for (auto& c: S) {
            if (!stk.empty() && stk.back() == c) {
                stk.pop_back();
            } else {
                stk.push_back(c);
            }
        }
        return string(stk.begin(), stk.end());
    }
};

/**
 * 98 / 98 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 10 MB 
 */
class Solution2 {
public:
    string removeDuplicates(string S) {
        string stk;
        for (auto& c: S) {
            if (!stk.empty() && stk.back() == c) {
                stk.pop_back();
            } else {
                stk.push_back(c);
            }
        }
        return stk;
    }
};
