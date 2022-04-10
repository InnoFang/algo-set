/**
 * 82 / 82 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 8.3 MB 
 */
static string morse[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> used;
        for (auto &word : words) {
            string m_word = "";
            for (auto &c : word) {
                m_word += morse[c - 'a'];
            }
            used.emplace(m_word);
        }
        return used.size();
    }
};
