/**
 * Created by Inno Fang on 2018/2/27.
 */

import java.util.*;

class Solution {

    /**
     * 15 / 15 test cases passed.
     * Status: Accepted
     * Runtime: 1 ms
     * @param numRows
     * @return
     */
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> triangle = new ArrayList<>();
        for (int r = 1; r <= numRows; r++) {
            List<Integer> row = new ArrayList<>(r);
            for (int c = 0; c < r; c++) {
                if (c == 0 || c == r - 1) row.add(1);
                else row.add(triangle.get(r - 2).get(c - 1) + triangle.get(r - 2).get(c));
            }
            triangle.add(row);
        }
        return triangle;
    }

    public static void main(String[] args) {
        for (int i = 0; i <= 10; i++) {
            System.out.println("\t+-----" + i + "-----+");
            new Solution().generate(i)
                    .forEach(row -> {
                        row.forEach(col -> System.out.print("\t" + col));
                        System.out.println();
                    });
        }
    }
}