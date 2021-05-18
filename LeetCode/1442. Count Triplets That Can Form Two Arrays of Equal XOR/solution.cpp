/**
 * 47 / 47 test cases passed.
 * Runtime: 200 ms
 * Memory Usage: 7.5 MB 
 */
class Solution {
public:
    int countTriplets(vector<int>& arr) {
        vector<int> xors(arr.size() + 1);
        for (int i = 0; i < arr.size(); ++ i) {
            xors[i + 1] = xors[i] ^  arr[i];
        } 
        int ans = 0;
        for (int i = 0; i < arr.size(); ++ i ) {
            for (int j = i + 1; j < arr.size(); ++ j) {
                for (int k = j; k < arr.size(); ++ k) { 
                    if (xors[i] == xors[k + 1]) {
                        ans += 1;
                    }
                }
            } 
        }
        return ans;
    }
};
