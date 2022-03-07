/**
 * 50 / 50 test cases passed.
 * Runtime: 100 ms
 * Memory Usage: 13.4 MB 
 */
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> dict(wordList.begin(), wordList.end());
        queue<string> que;
        que.emplace(beginWord);
        int steps = 1;
        while (!que.empty()) {
            int level = que.size();
            for (int i = 0; i < level; ++ i) {
                string word = que.front(); que.pop();
                for (int j = 0; j < word.size(); ++ j) {
                    for (char c = 'a'; c <= 'z'; ++ c) {
                        string next_word(word);
                        next_word[j] = c;
                        if (dict.count(next_word)) {
                            if (next_word == endWord) return steps + 1;
                            dict.erase(next_word);
                            que.emplace(next_word);
                        }
                    }
                }
            }
            ++ steps;
        }
        return 0;
    }
};
