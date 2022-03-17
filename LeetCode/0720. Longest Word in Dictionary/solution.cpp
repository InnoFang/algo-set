/**
 * 59 / 59 test cases passed.
 * Runtime: 48 ms
 * Memory Usage: 18.3 MB 
 */
class Solution {
public:
    string longestWord(vector<string>& words) {
        sort(words.begin(), words.end());
        unordered_set<string> us;
        string ans = "";
        for (auto word: words) {
            if (word.size() == 1 || us.count(word.substr(0, word.size() - 1))) {
                if (word.size() > ans.size()) ans = word;
                us.insert(word);
            }
        }
        return ans;
    }
};
