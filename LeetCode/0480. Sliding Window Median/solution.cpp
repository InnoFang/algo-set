/**
 * 42 / 42 test cases passed.
 * Runtime: 32 ms
 * Memory Usage: 14.1 MB 
 */
class Solution {
public:
    priority_queue<int> small;
    priority_queue<int, vector<int>, greater<int>> big;
    unordered_map<int, int> rec;

    double get(int &k) {
        if (k & 1) return small.top();
        return small.top() * 0.5 + big.top() * 0.5;
    }

    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        for (int i = 0; i < k; ++ i) small.push(nums[i]);
        for (int i = 0, k2 = k / 2; i < k2; ++ i) {
            big.push(small.top());
            small.pop();
        }

        vector<double> ans{ get(k) };
        for (int i = k; i < n; ++ i) {
            int balance = 0;  // size(small) - size(big)
            int left = nums[i - k];
            int right = nums[i];

            ++ rec[left];
            if (!small.empty() && left <= small.top()) {
                -- balance;
            } else {
                ++ balance;
            }
            if (!small.empty() && right <= small.top()) {
                ++ balance;
                small.push(right);
            } else {
                -- balance;
                big.push(right);
            }

            if (balance > 0) {
                big.push(small.top());
                small.pop();
            } else if (balance < 0) {
                small.push(big.top());
                big.pop();
            }

            while (!small.empty() && rec[small.top()] > 0) {
                -- rec[small.top()];
                small.pop();
            }
            while (!big.empty() && rec[big.top()] > 0) {
                -- rec[big.top()];
                big.pop();
            }
            ans.push_back(get(k));
        }
        return ans;
    }
};
