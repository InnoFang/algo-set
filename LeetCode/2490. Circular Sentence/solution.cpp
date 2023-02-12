/**
 * Runtime: 0 ms
 * Memory Usage: 6.5 MB 
 */
class Solution {
public:
    bool isCircularSentence(string sentence) {
        if (sentence.front() != sentence.back()) return false;
        for (int i = 0; i < sentence.size(); ++ i) {
            if (sentence[i] == ' ' && sentence[i - 1] != sentence[i + 1]) {
                return false;
            }
        }
        return true;
    }
};
