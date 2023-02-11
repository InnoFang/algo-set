/**
 * Runtime: 4 ms
 * Memory Usage: 11.4 MB 
 */
class Solution {
public:
    int fillCups(vector<int>& amount) {
        sort(amount.begin(), amount.end());
        int x = amount[0], y = amount[1], z = amount[2];
        if (x + y <= z) return z;
        return (x + y + z + 1) / 2;
    }
};
