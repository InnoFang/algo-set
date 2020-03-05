/**
 * status: Accepted
 * runtime: 12ms
 */
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0;
        for (auto b : bills) {
            if (b == 5) five ++;
            else if (b == 10 && five >= 1) {
                ten  ++;
                five --;
            }
            else if (b == 20 && five >= 1 && ten >= 1) {
                five --;
                ten  --;
            }
            else if (b == 20 && five >= 3) five -= 3;
            else return false;
        }
        return true;
    }
};