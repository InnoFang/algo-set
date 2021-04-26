/**
 * 84 / 84 test cases passed.
 * Runtime: 44 ms
 * Memory Usage: 25.4 MB 
 */
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int D) {
        int left = 0, right = 0;
        for(auto& weight: weights) {
            if (weight > left) left = weight;
            right += weight;
        }
        while (left < right) {
            int mid = (left + right) >> 1;
            int need = 1, daily = 0;
            for (auto& weight: weights) {
                if (daily + weight > mid) {
                    need ++;
                    daily = 0;
                }
                daily += weight;
            }
            if (need <= D) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};
