/**
 * 22 / 22 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6.5 MB 
 */
class Solution {
public:
    Solution() {
        string first_row = "qwertyuiop";
        string second_row = "asdfghjkl";
        string thrid_row = "zxcvbnm";
        first_set.insert(first_row.begin(), first_row.end());
        second_set.insert(second_row.begin(), second_row.end());
        thrid_set.insert(thrid_row.begin(), thrid_row.end());
    }

    int check(const char &c) {
        if (first_set.count(c)) return 1;
        if (second_set.count(c)) return 2;
        return 3;
    }

    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        for (string &word: words) {
            int rowidx = 0;
            bool one_row = true;
            for (char &c: word) {
                if (rowidx == 0) {
                    rowidx = check(tolower(c));
                } else if (check(tolower(c)) != rowidx) {
                    one_row = false;
                    break;
                }
            }
            if (one_row) {
                ans.emplace_back(word);
            }
        }
        return ans;
    }
private:
    unordered_set<char> first_set;
    unordered_set<char> second_set;
    unordered_set<char> thrid_set;
};
