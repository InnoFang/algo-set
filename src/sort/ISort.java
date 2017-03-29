package sort;

import utils.WrapperUtil;
import utils.compare.Comparable;

import java.util.ArrayList;
import java.util.List;

/**
 * Created by Inno Fang on 2017/3/28.
 */
public abstract class ISort {

    protected Comparable comparable;

    public ISort(Comparable comparable) {
        this.comparable = comparable;
    }

    public abstract <T> void sort(T[] arr);

    public void sort(char[] arr) {
        Character[] wrapArr = WrapperUtil.wrapperCharArray(arr);
        sort(wrapArr);
        for (int i = 0; i < arr.length; i++) {
            arr[i] = wrapArr[i];
        }
    }

    public void sort(int[] arr) {
        Integer[] wrapArr = WrapperUtil.wrapperIntArray(arr);
        sort(wrapArr);
        for (int i = 0; i < arr.length; i++) {
            arr[i] = wrapArr[i];
        }
    }

    public void sort(float[] arr) {
        Float[] wrapArr = WrapperUtil.wrapperFloatArray(arr);
        sort(wrapArr);
        for (int i = 0; i < arr.length; i++) {
            arr[i] = wrapArr[i];
        }
    }

    public void sort(double[] arr) {
        Double[] wrapArr = WrapperUtil.wrapperDoubleArray(arr);
        sort(wrapArr);
        for (int i = 0; i < arr.length; i++) {
            arr[i] = wrapArr[i];
        }
    }

    public void sort(long[] arr) {
        Long[] wrapArr = WrapperUtil.wrapperLongArray(arr);
        sort(wrapArr);
        for (int i = 0; i < arr.length; i++) {
            arr[i] = wrapArr[i];
        }
    }

}
