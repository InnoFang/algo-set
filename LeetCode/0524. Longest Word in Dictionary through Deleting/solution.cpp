/**
 * 31 / 31 test cases passed.
 * Runtime: 56 ms
 * Memory Usage: 14.7 MB 
 */
class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        sort(dictionary.begin(), dictionary.end(), 
                [](const string& a, const string& b) {
                    if (a.size() != b.size()) return b.size() < a.size();
                    return a < b;
                });
        for (const string & str: dictionary) {
            for (int i = 0, j = 0; i < s.size() && j < str.size();) {
                if (s[i] == str[j]) {
                    i++, j++;
                } else i++;
                if (j == str.size()) {
                    return str;
                }
            }
        }
        return "";
    }
};
