/**
 * 60 / 60 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 50.2 MB 
 */
class Solution {
public: 
    bool dfs(vector<int>& jobs, vector<int>& workers, int i, int limit) {
        if (i >= jobs.size()) {
            return true;
        }
        for (auto& worker: workers) {
            if (worker + jobs[i] <= limit) {
                worker += jobs[i];
                if (dfs(jobs, workers, i + 1, limit)) {
                    return true;
                }
                worker -= jobs[i];
            }
            if (worker == 0 || worker + jobs[i] == limit) {
                break;
            }
        }
        return false;
    }
    int minimumTimeRequired(vector<int>& jobs, int k) {
        sort(jobs.begin(), jobs.end(), greater<int>());
        int l = 0, r = 0;
        for (auto& job: jobs) {
            if (job > l) l = job;
            r += job;
        }
        while (l < r) {
            int mid = (l + r) >> 1;
            vector<int> workerss(k);
            if (dfs(jobs, workerss, 0, mid)) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        return l;
    }
};
