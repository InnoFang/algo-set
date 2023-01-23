/**
 * Runtime: 4 ms
 * Memory Usage: 41.8 MB 
 */
class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int bound = Arrays.stream(candies).max().getAsInt() - extraCandies;
        return Arrays.stream(candies).mapToObj(candy -> candy >= bound).collect(Collectors.toList());
    }
}
