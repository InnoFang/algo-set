package io.innofang.search;


import io.innofang.utils.WrapperUtil;
import io.innofang.utils.comparator.Comparator;

/**
 * Created by Inno Fang on 2017/4/2.
 *
 */
public abstract class ISearch {
    protected Comparator comparator;

    public ISearch(Comparator comparator) {
        this.comparator = comparator;
    }

    public abstract <T> void search(T[] arr, T target);

    public void search(char[] arr, char target) {
        Character wrapTarget = target;
        Character[] wrapArr = WrapperUtil.wrapperCharArray(arr);
        search(wrapArr, wrapTarget);
    }
    public void search(int[] arr, int target) {
        Integer wrapTarget = target;
        Integer[] wrapArr = WrapperUtil.wrapperIntArray(arr);
        search(wrapArr, wrapTarget);
    }

    public void search(long[] arr, long target) {
        Long wrapTarget = target;
        Long[] wrapArr = WrapperUtil.wrapperLongArray(arr);
        search(wrapArr, wrapTarget);
    }

    public void search(float[] arr, float target) {
        Float wrapTarget = target;
        Float[] wrapArr = WrapperUtil.wrapperFloatArray(arr);
        search(wrapArr, wrapTarget);
    }

    public void search(double[] arr, double target) {
        Double wrapTarget = target;
        Double[] wrapArr = WrapperUtil.wrapperDoubleArray(arr);
        search(wrapArr, wrapTarget);
    }
}
