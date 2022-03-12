/**
 * 56 / 56 test cases passed.
 * Runtime: 48 ms
 * Memory Usage: 30.6 MB 
 */
class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        if (arr[start] == 0) return true;
        int n = arr.size();
        queue<int> que;
        que.emplace(start);
        vector<bool> used(n);
        while (!que.empty()) {
            auto curr = que.front(); que.pop();
            int next = curr + arr[curr];
            if (next < n && !used[next]) {
                if (arr[next] == 0) return true;
                used[next] = true;
                que.emplace(next); 
            }
            next = curr - arr[curr];
            if (next >= 0 && !used[next]) {
                if (arr[next] == 0) return true;
                used[next] = true;
                que.emplace(next); 
            }
        }
        return false;
    }
};
