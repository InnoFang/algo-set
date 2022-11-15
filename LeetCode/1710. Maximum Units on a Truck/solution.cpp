/**
 * Runtime: 48 ms
 * Memory Usage: 15.5 MB 
 */
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), [](const vector<int> &a, const vector<int> &b) {
            return a[1] > b[1];
        });
        int ans = 0;
        for (auto &boxType: boxTypes) {
            int numberOfBoxes = boxType[0];
            int numberOfUnitsPerBox = boxType[1];
            if (numberOfBoxes < truckSize) {
                ans += numberOfBoxes * numberOfUnitsPerBox;
                truckSize -= numberOfBoxes;
            } else {
                ans += truckSize * numberOfUnitsPerBox;
                break;
            }
        }
        return ans;
    }
};
