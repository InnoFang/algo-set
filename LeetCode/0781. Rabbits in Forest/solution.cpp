/**
 * 54 / 54 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 8.3 MB 
 */
class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int> counter;
        for (auto& ans: answers) {
            counter[ans] += 1;
        }
        int result = 0;
        for (auto& [x, y]: counter) {
            result += (x + y) / (x + 1) * (x + 1);
        }
        return result;
    }
};
