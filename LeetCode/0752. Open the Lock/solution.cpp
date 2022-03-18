/**
 * 48 / 48 test cases passed.
 * Runtime: 216 ms
 * Memory Usage: 112.3 MB 
 */
class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        if (target == "0000") return 0;

        unordered_set<string> ban(deadends.begin(), deadends.end());
        if (ban.count("0000")) return -1;

        queue<pair<string, int>> que;
        que.emplace("0000", 0);
        unordered_set<string> used( {"0000"} );
        while (!que.empty()) {
            auto [status, step] = que.front(); que.pop();
            for (auto &next_status : get(status)) {
                if (used.count(next_status) || ban.count(next_status)) continue;
                if (next_status == target) return step + 1;
                que.emplace(next_status, step + 1);
                used.insert(move(next_status));
            }
        }
        return -1;
    }

private:
    char num_prev(const char &x) {
        return x == '0' ? '9' : x - 1;
    }

    char num_succ(const char &x) {
        return x == '9' ? '0' : x + 1;
    }

    vector<string> get(string &status) {
       vector<string> ret;
       for (int i = 0; i < 4; ++ i) {
           char num = status[i];
           status[i] = num_prev(num);
           ret.push_back(status);
           status[i] = num_succ(num);
           ret.push_back(status);
           status[i] = num;
       }
       return ret;
    }

};