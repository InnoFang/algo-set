package io.innofang.java;

import io.innofang.java.string.KMP;

/**
 * Created by Inno Fang on 2018/3/15.
 */
public class KMPTest {
    public static void main(String[] args) {
        KMP kmp = new KMP("abcdabcy");
        boolean result = kmp.matches("abcxabcdabcdabcy");
        System.out.println(result);
    }
}
