/**
 * 244 / 244 test cases passed.
 * Runtime: 264 ms
 * Memory Usage: 58.5 MB 
 */
class Solution {
private:
    	regex pattern_{ "([a-z|!,\.])|([a-z]+(-[a-z])?[a-z]*[!,\.]?)" };
public:
    int countValidWords(string sentence) {
        istringstream iss(sentence);
        string word;
        int ans = 0;
        while (iss >> word) {
            ans += regex_match(word.begin(), word.end(), pattern_);
        }
        return ans;
    }
};
