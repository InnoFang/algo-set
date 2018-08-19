public class Main {
    public static void merge(Integer[] list, int left, int mid, int right) {
        /* Auxiliary Space */
        Integer[] aux = new Integer[right - left + 1];

        /* Copy the array `list` from l to (r-l+1) to array `aux` */
        System.arraycopy(list, left, aux, 0, right - left + 1);

        int l = left, r = mid + 1;
        for (int i = left; i <= right; ++i) {
            if (l > mid) {
                list[i] = aux[r - left];
                ++r;
            } else if (r > right) {
                list[i] = aux[l - left];
                ++l;
            } else if (aux[l - left] < aux[r - left]) {
                list[i] = aux[l - left];
                ++l;
            } else {
                list[i] = aux[r - left];
                ++r;
            }
        }
    }

    public static void mergeSort(Integer[] list, int left, int right) {
        if (left >= right) return;

        int mid = left + (right - left) / 2;
        mergeSort(list, left, mid);
        mergeSort(list, mid + 1, right);

        if (list[mid] > list[mid + 1]) 
            merge(list, left, mid, right);
    }

    public static void main(String[] args) {
        Integer list[] = {5, 7, 3, 9, 2, 0, 1, 8, 6, 4};

        mergeSort(list, 0, list.length - 1);

        for (int i = 0; i < list.length; ++i) 
            System.out.print(list[i] + " ");
        System.out.println();
    }
}