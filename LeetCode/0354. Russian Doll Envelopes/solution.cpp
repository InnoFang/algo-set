/**
 * 84 / 84 test cases passed.
 * Runtime: 1100 ms
 * Memory Usage: 16 MB 
 */
class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin(), envelopes.end(), [](const vector<int>& v1, const vector<int>& v2) {
            return v1[0] == v2[0] ? v1[1] > v2[1] : v1[0] < v2[0];
        });
        vector<int> dp(envelopes.size(), 1);
        for (int i = 1; i < envelopes.size(); ++ i) {
            for (int j = 0; j < i; ++ j) {
                if (envelopes[i][1] > envelopes[j][1]) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }
        return *max_element(dp.begin(), dp.end());
    }
};

/**
 * 84 / 84 test cases passed.
 * Runtime: 1100 ms
 * Memory Usage: 16 MB 
 * Refer2: https://leetcode-cn.com/problems/russian-doll-envelopes/solution/cchao-99de-pai-xu-he-dan-diao-jie-fa-by-46wwp/
 */
class Solution2 {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        if (envelopes.empty()) return 0;
        
        sort(envelopes.begin(), envelopes.end(), [](const vector<int>& v1, const vector<int>& v2) {
            return v1[0] == v2[0] ? v1[1] > v2[1] : v1[0] < v2[0];
        });

        vector<int> record { envelopes[0][1] };
        for (int i = 1; i < envelopes.size(); ++ i) {
            int h = envelopes[i][1];
            if (h > record.back()) {
                record.push_back(h);
            } else {
                auto it = lower_bound(record.begin(), record.end(), h);
                *it = h;
            }
        }
        return record.size();
    }
};
