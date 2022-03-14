/**
 * 136 / 136 test cases passed.
 * Runtime: 60 ms
 * Memory Usage: 35.9 MB 
 */
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> rec;
        for (int i = 0; i < list1.size(); ++ i) {
            rec[list1[i]] = i;
        }
        int least = INT_MAX;
        vector<string> ans;
        for (int i = 0; i < list2.size(); ++ i) {
            if (rec.count(list2[i])) {
                int index_sum = rec[list2[i]] + i;
                if (index_sum < least) {
                    least = index_sum;
                    ans = {list2[i]};
                } else if (least == index_sum){
                    ans.emplace_back(list2[i]);
                }
            }
        }
        return ans;
    }
};
