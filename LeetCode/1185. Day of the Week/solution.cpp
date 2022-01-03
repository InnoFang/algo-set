/**
 * 43 / 43 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 5.8 MB 
 */
class Solution {
public:
    /* // zeller formula
     * c: century-number, the first two digits of the year
     * y: the last two digits of the year
     * m: month code. From March to December it is 3 to 12, for January it is 13, 
     *    and for February it is 14. When we consider January or February, then given year will be decreased by 1.
     * d: the day of the date
     * w: the weekday. When it is 0, it is Saturday, when it is 6, it means Friday
     */
    vector<string> week{"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
    string dayOfTheWeek(int day, int month, int year) {
        int m = month;
        if (m < 3) {
            m += 12;
            year -= 1;
        }
        int c = year / 100;
        int y = year % 100;
        int d = day;
        int w = (d + (13 * (m + 1)) / 5 + y + y / 4 + c / 4 + 5 * c) % 7;
        return week[w];
    }
};
