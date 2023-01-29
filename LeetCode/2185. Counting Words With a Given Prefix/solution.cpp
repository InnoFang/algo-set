/**
 * Runtime: 8 ms
 * Memory Usage: 9.6 MB 
 */
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        return count_if(words.begin(), words.end(), [&](const string& word) { return word.find(pref) == 0; });
    }
};
