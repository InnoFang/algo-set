public class Main {
    
    public static int binarySearch(Integer[] list, int target) {
        int lo = 0, hi = list.length - 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (list[mid] == target) return mid;
            else if (list[mid] < target) lo = mid + 1;
            else hi = mid - 1;
        }
        return -1;
    }

    public static void main(String[] args) {
        Integer[] list = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

        System.out.println("Where is number 3? " + binarySearch(list, 3));
    }
}