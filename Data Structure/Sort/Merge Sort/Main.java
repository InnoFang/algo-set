import java.util.Random; 

public class Main {
    public static void merge(Integer[] arr, int left, int mid, int right) {
        /* Auxiliary Space */
        Integer[] aux = new Integer[right - left + 1];

        /* Copy the array `arr` from l to (r-l+1) to array `aux` */
        System.arraycopy(arr, left, aux, 0, right - left + 1);

        int l = left, r = mid + 1;
        for (int i = left; i <= right; ++i) {
            if (l > mid) {
                arr[i] = aux[r - left];
                ++r;
            } else if (r > right) {
                arr[i] = aux[l - left];
                ++l;
            } else if (aux[l - left] < aux[r - left]) {
                arr[i] = aux[l - left];
                ++l;
            } else {
                arr[i] = aux[r - left];
                ++r;
            }
        }
    }

    public static void mergeSort(Integer[] arr, int left, int right) {
        if (left >= right) return;

        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        if (arr[mid] > arr[mid + 1]) 
            merge(arr, left, mid, right);
    }

    public static void main(String[] args) {
        int num = 20;
        int rangeLeft = 1;
        int rangeRight = 10000;

        Integer[] arr = generateRandomIntegerArray(num, rangeLeft, rangeRight);

        System.out.println("Original array: ");
        printArray(arr);

        
        mergeSort(arr, 0, arr.length - 1);

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