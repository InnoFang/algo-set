package utils;

import sort.ISort;

import java.util.Arrays;
import java.util.Random;

/**
 * Created by Inno Fang on 2017/3/28.
 */
public class SortTestHelper {

    /**
     * @param n          the number of array elements
     * @param rangeLeft  the left side of the range
     * @param rangeRight the right side of the range
     * @return an array containing N array element sizes between rangeLeft and rangeRight
     */
    public static int[] generateRandomArray(int n, int rangeLeft, int rangeRight) {

        int[] arr = new int[n];
        Random random = new Random();
        for (int i = 0; i < n; i++) {
            arr[i] = random.nextInt(rangeRight) % (rangeRight - rangeLeft + 1) + rangeLeft;
        }
        return arr;
    }

    public static int[] generateNearlyOrderedArray(int n, int swapTimes) {

        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = i;
        }

        Random random = new Random();
        for (int i = 0; i < swapTimes; i++) {
            int posx = random.nextInt(n);
            int posy = random.nextInt(n);
            swap(arr, posx, posy);
        }
        return arr;
    }

    public static int[] copyIntArray(int arr[]) {
        return Arrays.copyOf(arr, arr.length);
    }

    public static void printArray(int arr[]) {
        for (Integer t : arr) {
            System.out.print(t + " ");
        }
        System.out.println();
    }

    public static boolean isSorted(int arr[], int n) {
        for (int i = 0; i < arr.length - 1; i++) {
            if (arr[i] > arr[i + 1])
                return false;
        }
        return true;
    }

    public static void testSort(String sortName, ISort sort, int arr[]){
        long startTime = System.currentTimeMillis();
        sort.sort(arr);
        long endTime = System.currentTimeMillis();
        System.out.println(sortName + " : " + (endTime - startTime) + "s");
    }

    public static void swap(int[] arr, int x, int y) {
        int temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
    }
}
