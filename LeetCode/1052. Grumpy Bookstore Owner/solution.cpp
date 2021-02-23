/**
 * 78 / 78 test cases passed.
 * Runtime: 32 ms
 * Memory Usage: 29.4 MB 
 */
class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int X) {
        int sum = 0;
        for (int i = 0; i < customers.size(); ++ i) {
            sum += customers[i] * (1 - grumpy[i]);
        }
        int slide = 0;
        for (int i = 0; i < X; ++ i) {
            slide += customers[i] * grumpy[i];
        }
        int rest = slide;
        for (int i = X; i < grumpy.size(); ++ i) {
            slide += customers[i] * grumpy[i] - customers[i - X] * grumpy[i - X];
            rest = max(rest, slide);
        }
        return sum + rest;
    }
};
