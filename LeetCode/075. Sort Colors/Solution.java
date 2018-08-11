/**
 * Created by Inno Fang on 2018/2/5.
 */

import java.util.Arrays;

class Solution {
    /**
     * 86 / 86 test cases passed.
     * Status: Accepted
     * Runtime: 0 ms
     * @param nums
     */
    public void sortColors(int[] nums) {
        int zeros = -1, ones = 0, twos = nums.length, tmp;
        while (ones < twos) {
            switch (nums[ones]) {
                case 2:
                    tmp = nums[--twos];
                    nums[twos] = nums[ones];
                    nums[ones] = tmp;
                    break;
                case 0:
                    tmp = nums[ones];
                    nums[ones] = nums[++zeros];
                    nums[zeros] = tmp;
                case 1:
                    ones++;
                    break;
            }
        }
    }

    public static void main(String[] args) {
        Solution solution = new Solution();


        int[] arr1 = {1, 0, 2, 0, 2, 1, 1, 0, 0, 2, 2, 0, 2, 1, 0, 2, 1};
        solution.sortColors(arr1);
        Arrays.stream(arr1).forEach(i -> System.out.print(i + " "));
        System.out.println();

        int[] arr2 = {0,0,0,0,0,0,0,0,0};
        solution.sortColors(arr2);
        Arrays.stream(arr2).forEach(i -> System.out.print(i + " "));
        System.out.println();

        int[] arr3 = {1,1,1,1,1,1,1,1,1,1,1,1};
        solution.sortColors(arr3);
        Arrays.stream(arr3).forEach(i -> System.out.print(i + " "));
        System.out.println();

        int[] arr4 = {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2};
        solution.sortColors(arr4);
        Arrays.stream(arr4).forEach(i -> System.out.print(i + " "));
        System.out.println();

        int[] arr5 = {};
        solution.sortColors(arr5);
        Arrays.stream(arr5).forEach(i -> System.out.print(i + " "));
        System.out.println();
    }
}