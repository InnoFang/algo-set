/**
 * 47 / 47 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 7.7 MB 
 */
class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        transform(paragraph.begin(), paragraph.end(), paragraph.begin(), [](auto &c) {
            return isalpha(c) ? tolower(c) : ' ';
        });
        unordered_set<string> ban(banned.begin(), banned.end());
        unordered_map<string, int> count;
        stringstream ss(paragraph);

        for (string temp; ss >> temp; ban.count(temp) ? 0 : ++ count[temp]);

        return max_element(count.begin(), count.end(), [](auto &a, auto &b) { return a.second < b.second; })->first;
    }
};
