/**
 * 121 / 121 test cases passed.
 * Runtime: 32 ms
 * Memory Usage: 18.5 MB 
 */
class Solution {
public:
    bool check(vector<int> &piles, int k, int h) {
        int total = 0;
        for (auto &p : piles) total += ceil(p * 1.0 / k);
        return total <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = int(1e9);
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (check(piles, mid, h)) r = mid;
            else l = mid + 1;
        }
        return r;
    }
};
