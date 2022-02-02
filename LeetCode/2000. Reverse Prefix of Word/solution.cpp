/**
 * 112 / 112 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6 MB 
 */
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int idx = word.find(ch);
        if (idx != string::npos) {
            reverse(word.begin(), word.begin() +idx + 1);
        }
        return word;
    }
};