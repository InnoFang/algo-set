import java.util.Random; 

public class Main {

    public static void bubbleSort(Integer[] arr) {
        for (int i = 0; i < arr.length - 1; ++i) 
            for (int j = 0; j < arr.length - 1 - i; ++j) 
                if (arr[j] > arr[j + 1]) {
                    int tmp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = tmp;
                } 
    }

    public static void main(String[] args) {
        int num = 20;
        int rangeLeft = 1;
        int rangeRight = 10000;

        Integer[] arr = generateRandomIntegerArray(num, rangeLeft, rangeRight);

        System.out.println("Original array: ");
        printArray(arr);

        bubbleSort(arr);

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