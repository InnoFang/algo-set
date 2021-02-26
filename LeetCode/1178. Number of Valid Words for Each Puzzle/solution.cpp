/**
 * 10 / 10 test cases passed.
 * Runtime: 180 ms
 * Memory Usage: 38.3 MB 
 */
class Solution {
public:
    vector<int> subsets(int mask) {
        vector<int> ret;
        int subset = mask;
        do {
            ret.push_back(subset);
            subset = (subset - 1) & mask;
        } while (subset != mask);
        return ret;
    }
    vector<int> findNumOfValidWords(vector<string>& words, vector<string>& puzzles) {
        unordered_map<int, int> freq;
        for (auto& word: words) {
            int mask = 0;
            for (auto& w: word) {
                mask |= (1 << (w - 'a'));
            }
            ++ freq[mask];
        }
        vector<int> ans;
        for (auto& puzzle: puzzles) {
            int mask = 0;
            for (int i = 1; i < puzzle   .size(); ++ i) {
                mask |= (1 << (puzzle[i] - 'a'));
            }
            int total = 0;
            for (auto& subset: subsets(mask)) {
                int s = subset | (1 << (puzzle[0] - 'a'));
                if (freq.count(s)) {
                    total += freq[s];
                }
            }
            ans.push_back(total);
        }
        return ans;
    }
};
