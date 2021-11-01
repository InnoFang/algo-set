/**
 * 209 / 209 test cases passed.
 * Runtime: 280 ms
 * Memory Usage: 107.7 MB 
 */
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int limit = candyType.size() >> 1;
        unordered_set<int> types(candyType.begin(), candyType.end());
        return types.size() > limit ? limit : types.size();
    }
};
