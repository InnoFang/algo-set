/**
 * 139 / 139 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 11.9 MB 
 */
class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        stack<int> s;
        for (auto &num : arr) {
            if (s.empty() || s.top() <= num) {
                s.push(num);
            } else {
                int head = s.top(); s.pop();
                while (!s.empty() && s.top() > num) {
                    s.pop();
                }
                s.push(head);
            }
        }
        return s.size();
    }
};
