/**
 * 10957 / 10957 test cases passed.
 * Runtime: 24 ms
 * Memory Usage: 14.9 MB 
 */
class Solution {
public:
    vector<int> days = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dayOfYear(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));
        for (int i = 0; i < month; ++ i) {
            day += days[i];
        }
        if (month > 2) day += ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
        return day;
    }
};
