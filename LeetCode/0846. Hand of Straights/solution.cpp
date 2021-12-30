/**
 * 73 / 73 test cases passed.
 * Runtime: 56 ms
 * Memory Usage: 26.1 MB 
 */
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if (n % groupSize != 0) return false;
        unordered_map<int, int> count;
        for (auto &n : hand) {
            count[n] ++;
        }
        sort(hand.begin(), hand.end());
        for (int i = 0; i < n; ++ i) {
            if (count[hand[i]] == 0) continue;
            for (int j = 0, val = hand[i]; j < groupSize; ++ j) {
                if (count[val + j] == 0) return false;
                count[val + j]--;
            }
        }
        return true;
    }
};
