/**
 * 32 / 32 test cases passed.
 * Runtime: 260 ms
 * Memory Usage: 240 MB 
 */
class Solution {
private:
    using pii = pair<int, int>;
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        auto cmp = [&nums1, &nums2](const pii &a, const pii &b) {
            return a.first + a.second > b.first + b.second;
        };
        int size1 = min( (size_t)k, nums1.size() ); 
        int size2 = min( (size_t)k, nums2.size() );
        vector<vector<int>> ans;
        priority_queue<pii, vector<pii>, decltype(cmp)> min_heap(cmp);
        for (int i = 0; i < size1; ++ i) {
            for (int j = 0; j < size2; ++ j) {
                min_heap.emplace(nums1[i], nums2[j]);
            }
        }
        for (int i = 0; i < k && !min_heap.empty(); ++ i) {
            ans.push_back({min_heap.top().first, min_heap.top().second}); 
            min_heap.pop();
        }
        return ans;
    }
};
