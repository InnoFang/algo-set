package io.innofang.java.string;

/**
 * Created by Inno Fang on 2018/3/15.
 */
public class KMP {

    private String pattern;
    private int[] next;

    public KMP(String pattern) {
        resetPattern(pattern);
    }

    public void resetPattern(String pattern) {
        this.pattern = pattern;
        next = generateNext(pattern.length());
    }

    private int[] generateNext(int length) {
        int[] tmp = new int[length];
        char[] aux = pattern.toCharArray();
        int idx = 0;
        tmp[idx] = 0;
        for (int i = 1; i < length; ) {
            if (aux[idx] == aux[i]) tmp[i++] = (idx++) + 1;
            // tmp[idx] != tmp[i]
            else if (idx == 0) tmp[i++] = 0;
            else idx = tmp[idx - 1];
        }
        return tmp;
    }

    public boolean matches(String text) {
        char[] textArr = text.toCharArray();
        char[] patternArr = pattern.toCharArray();
        int t = 0;
        int p = 0;
        int n = 0;
        while (t < textArr.length && p < patternArr.length) {
            if (textArr[t] == patternArr[p]) {
                t++;
                p++;
            } else if (p != 0) p = next[p - 1];
            else t++;
        }
        return p == patternArr.length;
    }
}
