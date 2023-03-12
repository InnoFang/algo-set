/** 
 * Runtime: 20 ms
 * Memory Usage: 14.2 MB 
 */
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> cnt;
        for (auto &num: arr) {
            cnt[num]++;
        }
        for (auto &num: arr) {
            if (cnt[num] == 1) {
                --k;
                if (k == 0) {
                    return num;
                }
            }
        }
        return "";
    }
};
