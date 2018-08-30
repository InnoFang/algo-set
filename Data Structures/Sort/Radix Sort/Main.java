import java.util.Random; 

public class Main {

    public static void radixSort(Integer[] arr, int maxDigit) {  
        int digit = 1;                                      /* represent the each digit for given number */
        int index = 0;                                      /* arr's index */
        Integer[][] bucket = new Integer[10][arr.length];   /* radix bucket */
        int[] cnt = new int[10];                            /* store the number of each digit */
        for (; digit < maxDigit; digit *= 10, index = 0) {
            for (Integer num: arr) {                        /* put each number into the bucket */
                int d = (num / digit) % 10;
                bucket[d][cnt[d]] = num;
                cnt[d]++;
            }
            for (int i = 0; i < 10; ++i) {                  /* assign the numbers in the bucket back to arr */
                if (cnt[i] != 0) {
                    for (int j = 0; j < cnt[i]; ++j) {
                        arr[index++] = bucket[i][j];
                    }
                }
                cnt[i] = 0;
            }  
        }
    }

    public static void main(String[] args) {
        int num = 20;
        int rangeLeft = 1;
        int rangeRight = 10000;

        Integer[] arr = generateRandomIntegerArray(num, rangeLeft, rangeRight);

        System.out.println("Original array: ");
        printArray(arr);

        radixSort(arr, rangeRight);

        System.out.println("Sorted array: ");
        printArray(arr);
    }

    /**
      * @param num          the number of array elements
      * @param rangeLeft  the left side of the range
      * @param rangeRight the right side of the range
      * @return an array containing N array element sizes between rangeLeft and rangeRight
      */
    public static Integer[] generateRandomIntegerArray(int num, int rangeLeft, int rangeRight) {

        if (rangeLeft > rangeRight)
            throw new RuntimeException("Range is incorrect, rangeLeft must be greater than rangeRight");

        Integer[] arr = new Integer[num];
        Integer range = rangeRight - rangeLeft;
        Random random = new Random();
        for (int i = 0; i < num; i++) {
            arr[i] = random.nextInt(range) + rangeLeft;
        }
        return arr;
    }

    public static <T> void printArray(T arr[]) {
        for (T t : arr) {
            System.out.print(t + " ");
        }
        System.out.println();
    }
}