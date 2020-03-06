/**
 * 27 / 27 test cases passed.
 * Status: Accepted
 * Runtime: 1ms
 */
class Solution {
    public int[] distributeCandies(int candies, int num_people) {
        int[] people = new int[num_people]; 
        int dstri = 1, i = 0;
        while (candies > 0) {
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
}
