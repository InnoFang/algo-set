package io.innofang.sort;

import io.innofang.utils.WrapperUtil;
import io.innofang.utils.comparator.Comparator;

/**
 * Created by Inno Fang on 2017/3/28.
 *
 */
public abstract class ISort {

    protected Comparator comparator;

    public ISort(Comparator comparator) {
        this.comparator = comparator;
    }

    public abstract <T> void sort(T[] arr);

    public void sort(char[] arr) {
        Character[] wrapArr = WrapperUtil.wrapperCharArray(arr);
        sort(wrapArr);
        WrapperUtil.conversion(arr, wrapArr);
    }

    public void sort(int[] arr) {
        Integer[] wrapArr = WrapperUtil.wrapperIntArray(arr);
        sort(wrapArr);
        WrapperUtil.conversion(arr, wrapArr);
    }

    public void sort(float[] arr) {
        Float[] wrapArr = WrapperUtil.wrapperFloatArray(arr);
        sort(wrapArr);
        WrapperUtil.conversion(arr, wrapArr);
    }

    public void sort(double[] arr) {
        Double[] wrapArr = WrapperUtil.wrapperDoubleArray(arr);
        sort(wrapArr);
        WrapperUtil.conversion(arr, wrapArr);
    }

    public void sort(long[] arr) {
        Long[] wrapArr = WrapperUtil.wrapperLongArray(arr);
        sort(wrapArr);
        WrapperUtil.conversion(arr, wrapArr);
    }

}
