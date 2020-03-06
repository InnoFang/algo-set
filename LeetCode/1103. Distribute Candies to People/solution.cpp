/**
 * Beat 17%
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

/**
 * 直接赋值要比取模运算来的快
 * Beat 100%
 * 27 / 27 test cases passed.
 * Status: Accepted
 * Runtime: 0ms
 * 
 */
class Solution2 {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> people(num_people, 0); 
        int dstri = 1, i = 0;
        while (candies) {
            if (candies < dstri) {
                people[i] += candies;
                break;
            }
            candies -= dstri;
            people[i++] += dstri++;
            if (i == num_people) i = 0;
        }
        return people;
    }
};
