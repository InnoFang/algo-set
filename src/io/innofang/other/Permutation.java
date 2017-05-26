package io.innofang.other;

import io.innofang.utils.SwapUtil;

/**
 * Author: Inno Fang
 * Description: Permutation Algorithm Implementation (Java)
 */

public class Permutation {

    public static <T> void permutation(T[] list, int start, int length) {
        if (start == length) {
            for (int i = 0; i <= length; i++) {
                System.out.print(list[i] + "");
            }
            System.out.println();
        } else {
            for (int i = start; i <= length; i++) {
                SwapUtil.swap(list, start, i);
                permutation(list, start + 1, length);
                SwapUtil.swap(list, start, i);
            }
        }
    }

/*  //example
    public static void main(String[] args) {
        Integer[] list = {1, 2, 3, 4};
        permutation(list, 0, list.length - 1);
    }
*/
}