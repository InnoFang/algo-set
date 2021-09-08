/**
 * 35 / 35 test cases passed.
 * Runtime: 152 ms
 * Memory Usage: 76.3 MB 
 */
class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        using pii = pair<int, int>;

        size_t N = profits.size();  
        vector<pii> pairs;
        pairs.reserve(N);
        for (int i = 0; i < N; ++ i) {
            pairs.emplace_back(capital[i], profits[i]);
        }
        sort(pairs.begin(), pairs.end(), 
                [](const pii& a, const pii& b) { return a.first < b.first; }); 
        priority_queue<int, vector<int>, less<int>> que;
        int i = 0;
        while (k --> 0) {
            for (; i < N && pairs[i].first <= w; ++ i) {
                que.push(pairs[i].second);
            }
            if (que.empty()) {
                break;
            }
            w += que.top(); que.pop();
        }
        return w;
    }
};
