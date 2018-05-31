package io.innofang.java.utils;

/**
 * Created by Inno Fang on 2017/3/28.
 *
 */
public class SwapUtil {

    public static void swap(int arr[], int x, int y) {
        int temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
    }

    public static void swap(byte arr[], int x, int y) {
        byte temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
    }

    public static void swap(long arr[], int x, int y) {
        long temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
    }

    public static void swap(short arr[], int x, int y) {
        short temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
    }

    public static void swap(float arr[], int x, int y) {
        float temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
    }

    public static void swap(double arr[], int x, int y) {
        double temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
    }

    public static void swap(char arr[], int x, int y) {
        char temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
    }


    public static void swap(boolean arr[], int x, int y) {
        boolean temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
    }

    public static <T> void swap(T arr[], int x, int y) {
        T temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
    }
}
