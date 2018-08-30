import java.util.Random; 

public class Main {
    
    public static void shiftDown(Integer[] arr, int len, int idx) {
        while (idx * 2 + 1 < len) {
            int child = idx * 2 + 1;
            if (child + 1 < len && arr[child] < arr[child + 1]) ++child;
            if (arr[idx] >= arr[child]) break;
            swap(arr, idx, child);
            idx = child;
        }
    }

    public static void heapSort(Integer[] arr) {
        
        for (int i = arr.length / 2 - 1; i >= 0; --i) {
            shiftDown(arr, arr.length, i);
        }

        for (int i = arr.length - 1; i > 0; --i) {
            swap(arr, 0, i);
            shiftDown(arr, i, 0);
        }
    }

    public static void swap(Integer[] arr, int i, int j) {
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
    
    public static void main(String[] args) {
        int num = 20;
        int rangeLeft = 1;
        int rangeRight = 10000;

        Integer[] arr = generateRandomIntegerArray(num, rangeLeft, rangeRight);

        System.out.println("Original array: ");
        printArray(arr);

        heapSort(arr);

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