/**
 * 30 / 30 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6.4 MB 
 */
class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        stringstream ss(text);
        string word;
        vector<string> words;
        while (ss >> word) {
            words.push_back(word);
        }
        vector<string> ans;
        for (int i = 2; i < words.size(); ++ i) {
            if (words[i - 2] == first && words[i - 1] == second) {
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};
