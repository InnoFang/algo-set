/**
 * 82 / 82 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 15.4 MB 
 */
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> counts;
        for (auto &num : nums) {
            counts[num] += 1;
        }
        int limit = nums.size() / 3;
        vector<int> ans;
        for (auto &[num, cnt]: counts) {
            if (cnt > limit) {
                ans.push_back(num);
            }
        }
        return ans;
    }
};

/**
 * 82 / 82 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 15.4 MB 
 */
class Solution2 {
public:
    vector<int> majorityElement(vector<int>& nums) {
        auto cand1 = make_pair(0, 0);
        auto cand2 = make_pair(0, 0);
        
        // voting stage
        for (auto &num : nums) {
            if (num == cand1.first) cand1.second++;
            else if (num == cand2.first) cand2.second++;
            else if (cand1.second && cand2.second) {
                cand1.second--;
                cand2.second--;
            } else if (!cand1.second) {
                cand1.first = num;
                cand1.second = 1;
            } else if (!cand2.second) {
                cand2.first = num;
                cand2.second = 1;
            }
        }

        // counting stage
        cand1.second = cand2.second = 0;
        for (auto &num : nums) {
            if (num == cand1.first) cand1.second++;
            else if (num == cand2.first) cand2.second++;
        }

        int boundary = nums.size() / 3;
        vector<int> ans;
        if (cand1.second > boundary) ans.emplace_back(cand1.first);
        if (cand2.second > boundary) ans.emplace_back(cand2.first);
        return ans;
    }
};
