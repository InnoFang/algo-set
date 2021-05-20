/**
 * 110 / 110 test cases passed.
 * Runtime: 16 ms
 * Memory Usage: 10.2 MB 
 */
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> freq;
        for (auto& word: words) {
            freq[word] += 1;
        }
        auto cmp = [](const pair<string, int>& a, const pair<string, int>& b) {
            return a.second == b.second ? a.first < b.first : a.second > b.second;
        };
        priority_queue<pair<string, int>, vector<pair<string, int>>, decltype(cmp)> pq(cmp);
        for (auto& it: freq) {
            pq.emplace( it );
            if (pq.size() > k) {
                pq.pop();
            }
        }
        vector<string> ans(k);
        for (int i = k - 1; i >= 0; -- i) {
            ans[i] = pq.top().first;
            pq.pop();
        }
        return ans;
    }
};
