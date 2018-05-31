package io.innofang.java.search;


import io.innofang.java.utils.WrapperUtil;
import io.innofang.java.utils.comparator.Comparator;

/**
 * Created by Inno Fang on 2017/4/2.
 *
 * ISearch
 */
public abstract class ISearch {
    protected Comparator comparator;

    public ISearch(Comparator comparator) {
        this.comparator = comparator;
    }

    public abstract <T> Indices search(T[] arr, T target);

    public Indices search(char[] arr, char target) {
        Character wrapTarget = target;
        Character[] wrapArr = WrapperUtil.wrapperCharArray(arr);
        return search(wrapArr, wrapTarget);
    }

    public Indices search(int[] arr, int target) {
        Integer wrapTarget = target;
        Integer[] wrapArr = WrapperUtil.wrapperIntArray(arr);
        return search(wrapArr, wrapTarget);
    }

    public Indices search(long[] arr, long target) {
        Long wrapTarget = target;
        Long[] wrapArr = WrapperUtil.wrapperLongArray(arr);
        return search(wrapArr, wrapTarget);
    }

    public Indices search(float[] arr, float target) {
        Float wrapTarget = target;
        Float[] wrapArr = WrapperUtil.wrapperFloatArray(arr);
        return search(wrapArr, wrapTarget);
    }

    public Indices search(double[] arr, double target) {
        Double wrapTarget = target;
        Double[] wrapArr = WrapperUtil.wrapperDoubleArray(arr);
        return search(wrapArr, wrapTarget);
    }

    public static class Indices {
        public int floor;
        public int ceil;

        public Indices(int floor, int ceil) {
            this.floor = floor;
            this.ceil = ceil;
        }
    }
}
