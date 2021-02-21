/**
 * 60 / 60 test cases passed.
 * Runtime: 244 ms
 * Memory Usage: 76.9 MB 
 */
class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        multiset<int> store;
        int ans = 0;
        for (int l = 0, r = 0; r < nums.size(); ++ r) {
            store.insert(nums[r]);
            while (*store.rbegin() - *store.begin() > limit) {
                store.erase(store.find(nums[l]));
                l++;
            }
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};

/**
 * 60 / 60 test cases passed.
 * Runtime: 112 ms
 * Memory Usage: 50.9 MB 
 */
class Solution2 {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        deque<int> minQ;
        deque<int> maxQ;
        int ans = 0;
        for (int l = 0, r = 0; r < nums.size(); ++ r) {
            while (!minQ.empty() && nums[r] < minQ.back()) minQ.pop_back();
            while (!maxQ.empty() && nums[r] > maxQ.back()) maxQ.pop_back();
            minQ.push_back(nums[r]);
            maxQ.push_back(nums[r]);
            while (maxQ.front() - minQ.front() > limit) {
                if (maxQ.front() == nums[l]) maxQ.pop_front();
                if (minQ.front() == nums[l]) minQ.pop_front();
                l ++;
            }
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};

