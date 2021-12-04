/**
 * 126 / 126 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 8.7 MB 
 */
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> count(26, 0);
        for (auto &m : magazine) {
            count[m - 'a'] += 1;
        }
        for (auto &note : ransomNote) {
            if (count[note - 'a'] > 0) {
                count[note - 'a'] -= 1;
            } else {
                return false;
            }
        } 
        return true;
    }
};
