package utils;

/**
 * Created by Inno Fang on 2017/3/28.
 *
 */
public class WrapperUtil {

    public static int[] parseIntArray(Integer[] arr) {
        int[] newArr = new int[arr.length];
        for (int i = 0; i < arr.length; i++) {
            newArr[i] = arr[i];
        }
        return newArr;
    }

    public static Integer[] wrapperIntArray(int[] arr) {
        Integer[] newArr = new Integer[arr.length];
        for (int i = 0; i < arr.length; i++) {
            newArr[i] = arr[i];
        }
        return newArr;
    }

    public static float[] parseFloatArray(Float[] arr) {
        float[] newArr = new float[arr.length];
        for (int i = 0; i < arr.length; i++) {
            newArr[i] = arr[i];
        }
        return newArr;
    }

    public static Float[] wrapperFloatArray(float[] arr) {
        Float[] newArr = new Float[arr.length];
        for (int i = 0; i < arr.length; i++) {
            newArr[i] = arr[i];
        }
        return newArr;
    }

    public static long[] parseLongArray(Long[] arr) {
        long[] newArr = new long[arr.length];
        for (int i = 0; i < arr.length; i++) {
            newArr[i] = arr[i];
        }
        return newArr;
    }

    public static Long[] wrapperLongArray(long[] arr) {
        Long[] newArr = new Long[arr.length];
        for (int i = 0; i < arr.length; i++) {
            newArr[i] = arr[i];
        }
        return newArr;
    }

    public static double[] parseDoubleArray(Double[] arr) {
        double[] newArr = new double[arr.length];
        for (int i = 0; i < arr.length; i++) {
            newArr[i] = arr[i];
        }
        return newArr;
    }

    public static Double[] wrapperDoubleArray(double[] arr) {
        Double[] newArr = new Double[arr.length];
        for (int i = 0; i < arr.length; i++) {
            newArr[i] = arr[i];
        }
        return newArr;
    }

    public static char[] parseCharArray(Character[] arr) {
        char[] newArr = new char[arr.length];
        for (int i = 0; i < arr.length; i++) {
            newArr[i] = arr[i];
        }
        return newArr;
    }

    public static Character[] wrapperCharArray(char[] arr) {
        Character[] newArr = new Character[arr.length];
        for (int i = 0; i < arr.length; i++) {
            newArr[i] = arr[i];
        }
        return newArr;
    }

    public static void conversion(char[] arr, Character[] wrapArr) {
        for (int i = 0; i < arr.length; i++) {
            arr[i] = wrapArr[i];
        }
    }

    public static void conversion(int[] arr, Integer[] wrapArr) {
        for (int i = 0; i < arr.length; i++) {
            arr[i] = wrapArr[i];
        }
    }

    public static void conversion(long[] arr, Long[] wrapArr) {
        for (int i = 0; i < arr.length; i++) {
            arr[i] = wrapArr[i];
        }
    }

    public static void conversion(float[] arr, Float[] wrapArr) {
        for (int i = 0; i < arr.length; i++) {
            arr[i] = wrapArr[i];
        }
    }

    public static void conversion(double[] arr, Double[] wrapArr) {
        for (int i = 0; i < arr.length; i++) {
            arr[i] = wrapArr[i];
        }
    }

}
