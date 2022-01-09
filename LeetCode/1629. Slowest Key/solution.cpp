/**
 * 109 / 109 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 10.6 MB 
 */
class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int n = keysPressed.size();
        vector<int> cost(n);
        cost[0] = releaseTimes[0];
        for (int i = 1; i < n; ++ i) {
            cost[i] = releaseTimes[i] - releaseTimes[i - 1];
        }
        int max_cost_idx = 0;
        for (int i = 1; i < n; ++ i) {
            if (cost[i] > cost[max_cost_idx] ||
                cost[i] == cost[max_cost_idx] && keysPressed[i] > keysPressed[max_cost_idx]) {
                max_cost_idx = i;
            }
        }
        return keysPressed[max_cost_idx];
    }
};

/**
 * 109 / 109 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 10.4 MB 
 */
class Solution2 {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int n = keysPressed.size(); 
        int max_cost = releaseTimes[0];
        char slowest_key = keysPressed[0];
        for (int i = 1; i < n; ++ i) {
            int cost = releaseTimes[i] - releaseTimes[i - 1];
            if (cost > max_cost ||
                cost == max_cost && keysPressed[i] > slowest_key) {
                    slowest_key = keysPressed[i];
                    max_cost = cost;
            }
        }
        return slowest_key;
    }
};
