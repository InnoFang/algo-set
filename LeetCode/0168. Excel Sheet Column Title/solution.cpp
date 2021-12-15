/**
 * 18 / 18 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.9 MB 
 */
class Solution {
public:
    string convertToTitle(int columnNumber) {
        vector<char> ans;
        while (columnNumber != 0) {
            columnNumber --;
            ans.emplace_back(char('A' + (columnNumber % 26)));
            columnNumber /= 26;
        }
        return string(ans.rbegin(), ans.rend());
    }
};
