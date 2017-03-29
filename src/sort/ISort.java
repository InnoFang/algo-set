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

    public void setComparision(Comparable comparable){
        this.comparable = comparable;
    }

    public abstract <T> void sort(T[] arr);

    void sort(char[] arr) {
        sort(WrapperUtil.wrapperCharArray(arr));
    }

    void sort(int[] arr) {
        sort(WrapperUtil.wrapperIntArray(arr));
    }

    void sort(float[] arr) {
        sort(WrapperUtil.wrapperFloatArray(arr));
    }

    void sort(double[] arr) {
        sort(WrapperUtil.wrapperDoubleArray(arr));
    }

    void sort(long[] arr) {
        sort(WrapperUtil.wrapperLongArray(arr));
    }

}
