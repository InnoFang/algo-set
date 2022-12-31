/**
 * Runtime: 4 ms
 * Memory Usage: 17.6 MB 
 */
class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int ans = 0;
        for (int i = 0; i < seats.size(); ++ i) {
            ans += abs(students[i] - seats[i]);
        }
        return ans;
    }
};
