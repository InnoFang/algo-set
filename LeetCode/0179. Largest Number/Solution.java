import java.util.Arrays;

/**
 * Created by Inno Fang on 2018/3/14.
 */


class Solution {

    /**
     * 221 / 221 test cases passed.
     * Status: Accepted
     * Runtime: 127 ms
     */
    public String largestNumber(int[] nums) {
        StringBuilder res = new StringBuilder();
        Arrays.stream(nums)
                .mapToObj(String::valueOf)
                .sorted((o1, o2) -> (o2 + o1).compareTo(o1 + o2))
                .forEach(res::append);
        return res.charAt(0) == '0' ? "0" : res.toString();
    }
}