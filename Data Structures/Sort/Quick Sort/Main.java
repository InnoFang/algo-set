import java.util.Random;
public class Main {
    
    public static Integer partition(Integer[] arr, int left, int right) {
        int l = left, r = right;
        Integer tmp = arr[l];
        while (l != r) {
            while (l < r && arr[r] >= tmp) --r;
            while (l < r && arr[l] <= tmp) ++l;
            if (l < r) {
                Integer t = arr[l];
                arr[l] = arr[r];
                arr[r] = t;
            }
        }
        Integer t = arr[l];
        arr[l] = arr[left];
        arr[left] = t;
        return l;
    }

    public static void quickSort(Integer[] arr, int left, int right) {
        if (left > right) return;
        int pivot = partition(arr, left, right);
        quickSort(arr, left, pivot - 1);
        quickSort(arr, pivot + 1, right);
    }
   
    public static void main(String[] args) {
        int num = 20;
        int rangeLeft = 1;
        int rangeRight = 10000;

        Integer[] arr = generateRandomIntegerArray(num, rangeLeft, rangeRight);

        System.out.println("Original array: ");
        printArray(arr);

        quickSort(arr, 0, arr.length - 1);

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