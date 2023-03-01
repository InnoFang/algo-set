/**
 * Runtime: 4 ms
 * Memory Usage: 5.8 MB 
 */
class Solution {
public:
    int numerical(const string &word) {
        int num = 0;
        for (auto &c: word) {
            num *= 10;
            num += c - 'a';
        }
        return num;
    }

    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        return numerical(firstWord) + numerical(secondWord) == numerical(targetWord);
    }
};
