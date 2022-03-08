/**
 * 14 / 14 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 6.5 MB 
 */
class Solution {
public:
    int min_steps = INT_MAX;
    unordered_set<string> used;
    int minMutation(string start, string end, vector<string>& bank) {
        dfs(0, start, end, bank);
        return min_steps == INT_MAX ? -1 : min_steps;
    }
    void dfs(int step, string curr, string end, vector<string>& bank) {
        if (curr == end) {
            min_steps = min(min_steps, step);
        }
        for (auto &gene : bank) {
            int diff = 0;
            for (int i = 0; i < gene.size() && diff <= 1; ++ i) {
                if (gene[i] != curr[i]) ++ diff;
            }
            if (diff == 1 && !used.count(gene)) {
                used.insert(gene);
                dfs(step + 1, gene, end, bank);
                used.erase(gene);
            }
        }
    }
};
