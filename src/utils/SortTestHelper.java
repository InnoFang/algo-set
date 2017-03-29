package utils;

import sort.ISort;
import utils.compare.Comparable;
import utils.compare.IntegerComparison;

import java.util.Random;


public class SortTestHelper {

    /**
     * @param n          the number of array elements
     * @param rangeLeft  the left side of the range
     * @param rangeRight the right side of the range
     * @return an array containing N array element sizes between rangeLeft and rangeRight
     */
    public static int[] generateRandomIntegerArray(int n, int rangeLeft, int rangeRight) {

        if (rangeLeft > rangeRight)
            throw new RuntimeException("Range is incorrect, rangeLeft must be greater than rangeRight");

        int[] arr = new int[n];
        Random random = new Random();
        for (int i = 0; i < n; i++) {
            arr[i] = random.nextInt(rangeRight) % (rangeRight - rangeLeft + 1) + rangeLeft;
        }
        return arr;
    }

    /**
     * @param n         the number of array elements
     * @param swapTimes number of array swaps
     * @return an almost ordered array
     */
    public static int[] generateNearlyOrderedIntegerArray(int n, int swapTimes) {

        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = i;
        }

        Random random = new Random();
        for (int i = 0; i < swapTimes; i++) {
            int posx = random.nextInt(n);
            int posy = random.nextInt(n);
            SwapUtil.swap(arr, posx, posy);
        }
        return arr;
    }

    public static <T> void printArray(T arr[]) {
        for (T t : arr) {
            System.out.print(t + " ");
        }
        System.out.println();
    }

    public static void printArray(int arr[]) {
        for (int t : arr) {
            System.out.print(t + " ");
        }
        System.out.println();
    }

    @SuppressWarnings("unchecked")
    public static <T> boolean isAscending(T arr[], Comparable comparable) {
        for (int i = 0; i < arr.length - 1; i++) {
            if (comparable.moreThan(arr[i], arr[i + 1])) {
                return false;
            }
        }
        return true;
    }

    @SuppressWarnings("unchecked")
    public static boolean isAscending(int arr[]) {
        return isAscending(WrapperUtil.wrapperIntArray(arr), new IntegerComparison());
    }

    @SuppressWarnings("unchecked")
    public static <T> boolean isDescending(T arr[], Comparable comparable) {
        for (int i = 0; i < arr.length; i++) {
            if (comparable.lessThan(arr[i], arr[i + 1])) {
                return false;
            }
        }
        return true;
    }

    @SuppressWarnings("unchecked")
    public static boolean isDescending(int arr[]) {
        return isDescending(WrapperUtil.wrapperIntArray(arr), new IntegerComparison());
    }

    @SuppressWarnings("unchecked")
    public static <T> void testSort(String sortName, ISort sort, T arr[]) {
        long startTime = System.currentTimeMillis();
        sort.sort(arr);
        long endTime = System.currentTimeMillis();
        System.out.printf("%s : %.6fs\n", sortName, ((endTime - startTime) * 0.1) / 1000);
    }

    @SuppressWarnings("unchecked")
    public static void testSort(String sortName, ISort sort, int arr[]) {
        Integer[] wrapArr = WrapperUtil.wrapperIntArray(arr);
        testSort(sortName, sort, wrapArr);
        for (int i = 0; i < arr.length; i++) {
            arr[i] = wrapArr[i];
        }
    }

}
