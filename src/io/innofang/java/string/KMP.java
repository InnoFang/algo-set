package io.innofang.java.string;

/**
 * Created by Inno Fang on 2018/3/15.
 */
public class KMP {

    private char[] pattern;
    private int[] next;

    public KMP(char[] pattern) {
        resetPattern(pattern);
    }

    public KMP(String pattern) {
        resetPattern(pattern);
    }

    public void resetPattern(String pattern) {
        this.pattern = pattern.toCharArray();
        next = generateNext(pattern.length());
    }

    public void resetPattern(char[] pattern) {
        this.pattern = pattern;
        next = generateNext(pattern.length);
    }
    public boolean matches(String text) {
        return matches(text.toCharArray());
    }

    public boolean matches(char[] text) {
        int t = 0;
        int p = 0;
        int n = 0;
        while (t < text.length && p < pattern.length) {
            if (text[t] == pattern[p]) {
                t++;
                p++;
            } else if (p != 0) p = next[p - 1];
            else t++;
        }
        return p == pattern.length;
    }

    private int[] generateNext(int length) {
        int[] tmp = new int[length];
        int idx = 0;
        tmp[idx] = 0;
        for (int i = 1; i < length; ) {
            if (pattern[idx] == pattern[i]) tmp[i++] = (idx++) + 1;
                // tmp[idx] != tmp[i]
            else if (idx == 0) tmp[i++] = 0;
            else idx = tmp[idx - 1];
        }
        return tmp;
    }

}
