package io.innofang.java;

import io.innofang.java.other.Permutation;

/**
 * Created by Inno Fang on 2017/5/26.
 *
 * Test for permutation
 */
public final class PermutationTest {

    public static void main(String[] args) {
        Integer[] list = { 1, 2, 3, 4 };
        Permutation.permutation(list, 0, list.length - 1);
    }

}
