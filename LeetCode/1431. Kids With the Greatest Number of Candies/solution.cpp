/**
 * Runtime: 4 ms
 * Memory Usage: 8.7 MB 
 */
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int bound = *max_element(candies.begin(), candies.end()) - extraCandies;
        for (auto &candy: candies) {
            ans.push_back(candy >= bound);
        }
        return ans;
    }
};
