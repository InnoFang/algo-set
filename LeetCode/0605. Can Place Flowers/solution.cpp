/**
 * 123 / 123 test cases passed.
 * Status: Accepted
 * Runtime: 40 ms
 */
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        flowerbed.insert(flowerbed.begin(), 0);
        flowerbed.push_back(0);

        int sz = flowerbed.size();
        for ( int i = 1; i < sz - 1 && n; ++ i ) {
            if ( flowerbed[i] == 0 && flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0 ) {
                -- n;
                flowerbed[i] = 1;
            }
        }
        return n == 0;
    }
};

