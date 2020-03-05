/**
 * 27 / 27 test cases passed.
 * Status: Accepted
 * Runtime: 8ms
 */
class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> people(num_people, 0); 
        for (int i = 1; ; i++) {
            if (candies - i > 0)
                people[(i - 1) % num_people] += i;
            else {
                people[(i - 1) % num_people] += candies;
                break;
            }
            candies -= i;
        }
        return people;
    }
};

